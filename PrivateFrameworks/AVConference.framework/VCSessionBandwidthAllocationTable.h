
@interface VCSessionBandwidthAllocationTable : VCObject {
    NSDictionary * _audioOnlyBitrateToStreamIDsTable;
    NSDictionary * _audioVideoBitrateToStreamIDsTable;
    unsigned int  _currentScreenEncoderGroupCount;
    unsigned int  _maxActiveCameraEncoders;
    unsigned int  _maxActiveScreenEncoders;
    NSMutableDictionary * _sortedEntriesForStreamToken;
    NSMutableDictionary * _streamIDToEntryTable;
    NSMutableDictionary * _streamTokenEntries;
    unsigned char  _type;
    NSDictionary * _videoOnlyBitrateToStreamIDsTable;
    NSDictionary * _videoStreamIdToRepairStreamIdMap;
}

@property (nonatomic, readonly) NSDictionary *audioOnlyBitrateToStreamIDsTable;
@property (nonatomic, readonly) NSDictionary *audioVideoBitrateToStreamIDsTable;
@property (nonatomic, readonly) NSDictionary *videoOnlyBitrateToStreamIDsTable;
@property (nonatomic, readonly) NSDictionary *videoStreamIdToRepairStreamIdMap;

- (void)addBandwidthAllocationTableEntry:(id)arg1;
- (void)appendEntry:(id)arg1 streamTokenEntries:(id)arg2 currentNetworkBitrate:(unsigned int*)arg3 shouldUseRepairBitrate:(bool)arg4 appendedVideoEncoderGroups:(id)arg5;
- (id)audioOnlyBitrateToStreamIDsTable;
- (id)audioVideoBitrateToStreamIDsTable;
- (void)cleanupStreamTokenEntries:(id)arg1 currentNetworkBitrate:(unsigned int*)arg2 isRedundancyEnabled:(bool)arg3 appendedVideoEncoderGroups:(id)arg4;
- (void)dealloc;
- (id)entryForStreamID:(id)arg1;
- (id)initWithType:(unsigned char)arg1;
- (id)newAggregatedBandwidthTableWithRedundancy:(bool)arg1 redundancyEnabledFor720Stream:(bool)arg2 enableMap:(id)arg3 is1080pCameraAvailable:(bool)arg4;
- (void)printTable:(id)arg1;
- (bool)shouldAddBackupEntry:(id)arg1 referenceTable:(id)arg2 referenceQualityIndices:(id)arg3;
- (bool)shouldAppendEntry:(id)arg1 appendedVideoEncoderGroups:(id)arg2;
- (bool)shouldAppendEntry:(id)arg1 appendedVideoEncoderGroups:(id)arg2 is1080pCameraAvailable:(bool)arg3;
- (bool)shouldUseRepairBitrateForEntry:(id)arg1 isRedundancyEnabled:(bool)arg2 isRedundancyEnabledFor720Stream:(bool)arg3;
- (id)tableEntriesForStreamToken:(long long)arg1;
- (id)videoOnlyBitrateToStreamIDsTable;
- (id)videoStreamIdToRepairStreamIdMap;

@end
