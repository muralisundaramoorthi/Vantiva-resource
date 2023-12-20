#!/bin/bash
# This script changes to the specified directory and runs the lora_pkt_fwd program

# Change to the directory
cd ~/lora-net/picoGW_packet_forwarder/US-lora_pkt_fwd/

# Run the lora_pkt_fwd program
./lora_pkt_fwd -d /dev/ttyACM0

