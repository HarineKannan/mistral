#!/bin/bash


SOURCE_NAME="/home/harine/Pictures/Screenshots"
DESTINATION_NAME="/home/harine/Documents"
BACKUP_NAME="backup_$(date +
 %Y-%m-%d_%H-%M-%S).tar.gz"
tar -czf "${DESTINATION_NAME}/${BACKUP_NAME}" "${SOURCE_NAME}"

