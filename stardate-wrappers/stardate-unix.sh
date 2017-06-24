#/bin/bash

if [ $# -lt 1 ]
then
  echo "This command requires a unix timestamp arguement.  Use 'stardate-now' to just get the current stardate"
  exit
fi

stardate $1
