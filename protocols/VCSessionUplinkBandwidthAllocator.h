
@protocol VCSessionUplinkBandwidthAllocator <NSObject>

@required

- (void)addBandwidthAllocationTableEntry:(VCSessionBandwidthAllocationTableEntry *)arg1 updateNow:(bool)arg2;
- (bool)isCamera1080pAvailable;
- (bool)isEnabledStreamToken:(long long)arg1;
- (bool)isRedundancyEnabled;
- (bool)isRedundancyEnabledFor720Stream;
- (bool)peerSubscription:(bool)arg1 streamID:(unsigned short)arg2;
- (NSArray *)repairStreamIDsForStreamToken:(long long)arg1;
- (void)setCamera1080pAvailable:(bool)arg1;
- (void)setRedundancyEnabled:(bool)arg1;
- (void)setRedundancyEnabledFor720Stream:(bool)arg1;
- (NSArray *)streamIDsForStreamToken:(long long)arg1;
- (NSMutableArray *)streamIDsForStreamToken:(long long)arg1 targetBitrate:(unsigned int)arg2;
- (NSMutableArray *)streamIDsForStreamToken:(long long)arg1 targetBitrateCap:(unsigned int)arg2;
- (void)streamToken:(long long)arg1 enabled:(bool)arg2;
- (NSMutableArray *)targetBitratesForStreamToken:(long long)arg1 targetNetworkBitrate:(unsigned int)arg2 preferNetworkBitrates:(bool)arg3;

@end
