#!/bin/bash

if [ $# -gt 0 ]
then
  echo "Use 'stardate-unix' if you want to specify a unix timestamp"
  exit
fi

stardate
