
@interface HMDLegacyCloudZone : HMBCloudZone {
    long long  _keyStatus;
    NSSet * _participants;
}

@property (nonatomic, readonly) long long keyStatus;
@property (nonatomic, readonly) NSSet *participants;

- (void).cxx_destruct;
- (id)decodeModelFromRecord:(id)arg1 externalRecordFields:(id)arg2 source:(unsigned long long)arg3 error:(id*)arg4;
- (id)encodeRecordFromModel:(id)arg1 existingRecord:(id)arg2 encodingContext:(id)arg3 error:(id*)arg4;
- (id)initWithCloudDatabase:(id)arg1 configuration:(id)arg2 state:(id)arg3;
- (long long)keyStatus;
- (id)participants;
- (void)startUpWithLocalZone:(id)arg1;
- (id)waitForPendingRebuild;

@end
