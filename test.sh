#!/bin/bash
# Print the current directory
echo "Current Directory:"
pwd

# Show disk space usage
echo -e "\nDisk Space Usage:"
df -h

# Show system uptime
echo -e "\nSystem Uptime:"
uptime

# Show logged-in users
echo -e "\nLogged-in Users:"
who

# Show top processes
echo -e "\nTop Processes (5 seconds):"
top -b -n 1
