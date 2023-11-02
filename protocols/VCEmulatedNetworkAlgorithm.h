
@protocol VCEmulatedNetworkAlgorithm <NSObject>

@required

- (double)expectedProcessEndTime;
- (int)packetCountBytesInNetworkQueue;
- (unsigned int)packetCountInNetworkQueue;
- (void)process:(VCEmulatedPacket *)arg1;
- (void)setPacketCountBytesInNetworkQueue:(int)arg1;
- (void)setPacketCountInNetworkQueue:(unsigned int)arg1;
- (void)updateSettingsAtTime:(double)arg1 impairments:(NSDictionary *)arg2;

@end
