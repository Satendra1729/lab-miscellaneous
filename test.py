import argparse
parser = argparse.ArgumentParser()
parser.add_argument('-example',default=False,
                                choices={True,False}, type=lambda x : x.lower() == "true" 
                                if x.lower() in ["true","false"] else x)
args = parser.parse_args()
print(args)