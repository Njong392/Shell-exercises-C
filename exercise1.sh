#!/bin/sh

echo "Enter the file name."
read filename

if [ -f $filename ]
then
    gcc $filename -o exercise1C
    ./exercise1C
else
        echo "please create file first"
    fi
  
