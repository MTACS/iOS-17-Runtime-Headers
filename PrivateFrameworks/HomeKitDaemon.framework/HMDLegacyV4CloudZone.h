
@interface HMDLegacyV4CloudZone : HMBCloudZone {
    long long  _keyStatus;
    NSSet * _participants;
    NSString * _rootRecordName;
}

@property (nonatomic, readonly) long long keyStatus;
@property (nonatomic, readonly) NSSet *participants;
@property (readonly) NSString *rootRecordName;

- (void).cxx_destruct;
- (id)decodeModelFromRecord:(id)arg1 externalRecordFields:(id)arg2 source:(unsigned long long)arg3 error:(id*)arg4;
- (id)encodeRecordFromModel:(id)arg1 existingRecord:(id)arg2 encodingContext:(id)arg3 error:(id*)arg4;
- (id)initWithCloudDatabase:(id)arg1 configuration:(id)arg2 state:(id)arg3;
- (long long)keyStatus;
- (id)participants;
- (void)pushGroupWithBlockRow:(unsigned long long)arg1 tuples:(id)arg2 options:(id)arg3 activity:(id)arg4 completionPromise:(id)arg5;
- (id)recordIDForParentModelID:(id)arg1;
- (id)recordWithExistingRecord:(id)arg1 modelData:(id)arg2 parentModelID:(id)arg3 modelContainer:(id)arg4 error:(id*)arg5;
- (id)rootRecordModelID;
- (id)rootRecordName;
- (id)rootRecordParentModelID;
- (id)tupleForRootRecordWithOutputBlockRow:(unsigned long long)arg1 objectIDToRecordNameMap:(id)arg2;
- (id)waitForPendingRebuild;

@end
