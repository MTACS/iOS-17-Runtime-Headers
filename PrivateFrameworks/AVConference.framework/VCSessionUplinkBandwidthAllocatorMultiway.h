
@interface VCSessionUplinkBandwidthAllocatorMultiway : VCObject <VCSessionUplinkBandwidthAllocator> {
    bool  _camera1080pAvailable;
    NSDictionary * _currentTable;
    bool  _redundancyEnabled;
    bool  _redundancyEnabledFor720Stream;
    NSMutableDictionary * _streamTokenToEnableMap;
    VCSessionBandwidthAllocationTable * _table;
}

@property (getter=isCamera1080pAvailable, nonatomic) bool camera1080pAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRedundancyEnabled, nonatomic) bool redundancyEnabled;
@property (getter=isRedundancyEnabledFor720Stream, nonatomic) bool redundancyEnabledFor720Stream;
@property (readonly) Class superclass;

- (void)_recomputeCurrentTable;
- (void)addBandwidthAllocationTableEntry:(id)arg1 updateNow:(bool)arg2;
- (void)dealloc;
- (id)getBitrateToStreamTable;
- (id)init;
- (bool)isCamera1080pAvailable;
- (bool)isEnabledStreamToken:(long long)arg1;
- (bool)isRedundancyEnabled;
- (bool)isRedundancyEnabledFor720Stream;
- (bool)peerSubscription:(bool)arg1 streamID:(unsigned short)arg2;
- (id)repairStreamIDsForStreamToken:(long long)arg1;
- (void)setCamera1080pAvailable:(bool)arg1;
- (void)setRedundancyEnabled:(bool)arg1;
- (void)setRedundancyEnabledFor720Stream:(bool)arg1;
- (id)streamIDsForStreamToken:(long long)arg1;
- (id)streamIDsForStreamToken:(long long)arg1 targetBitrate:(unsigned int)arg2;
- (id)streamIDsForStreamToken:(long long)arg1 targetBitrateCap:(unsigned int)arg2;
- (void)streamToken:(long long)arg1 enabled:(bool)arg2;
- (id)tableEntriesForStreamToken:(long long)arg1 targetBitrate:(unsigned int)arg2 remainingBitrate:(unsigned int*)arg3 isLastEntryForStreamToken:(bool*)arg4;
- (id)targetBitratesForStreamToken:(long long)arg1 targetNetworkBitrate:(unsigned int)arg2 preferNetworkBitrates:(bool)arg3;

@end
