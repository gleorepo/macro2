#! /bin/bash
cd ~/qmk_firmware/keyboards/macro2/
Rscript processor.R	
qmk compile -kb macro2 -km default
cp ~/qmk_firmware/macro2_default.hex /mnt/c/Users/leogc/Downloads

