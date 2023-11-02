
@protocol VCSessionDownlinkBandwidthAllocatorClient

@required

- (NSNumber *)activeDownlinkStreamIDForStreamGroupID:(unsigned int)arg1;
- (unsigned int)actualNetworkBitrateForStreamGroup:(unsigned int)arg1;
- (bool)isRemoteScreenEnabled;
- (bool)isVisible;
- (NSArray *)mediaEntries;
- (unsigned int)optedInNetworkBitrateForStreamGroup:(unsigned int)arg1;
- (NSNumber *)optedInStreamIDForStreamGroupID:(unsigned int)arg1;
- (unsigned int)prominenceIndex;
- (void)setMediaSuspended:(bool)arg1 forStreamToken:(NSNumber *)arg2;
- (void)setRemoteScreenEnabled:(bool)arg1;
- (NSString *)uuid;
- (unsigned char)videoQuality;
- (unsigned int)visibilityIndex;

@end
