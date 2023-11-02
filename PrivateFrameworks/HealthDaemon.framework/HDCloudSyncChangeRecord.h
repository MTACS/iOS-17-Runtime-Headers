
@interface HDCloudSyncChangeRecord : HDCloudSyncRecord {
    HDCloudSyncCodableChange * _underlyingChange;
}

@property (nonatomic, readonly) long long changeIndex;
@property (nonatomic, readonly, copy) NSNumber *changeSize;
@property (nonatomic, readonly, copy) NSURL *changesetArchiveFileURL;
@property (nonatomic, readonly) HDSyncAnchorRangeMap *decodedSyncAnchorRangeMap;
@property (nonatomic, readonly) bool finalForSequence;
@property (nonatomic, readonly) int protocolVersion;
@property (nonatomic, readonly, copy) CKRecordID *sequenceRecordID;

+ (id)assetKeys;
+ (long long)bytesPerChangeRecordAssetThreshold;
+ (long long)bytesPerChangeRecordAssetThresholdHardLimit;
+ (id)changesetArchiveContentDataForCKRecord:(id)arg1 error:(id*)arg2;
+ (id)changesetArchiveFileHandleForCKRecord:(id)arg1 error:(id*)arg2;
+ (id)changesetArchiveURLForCKRecord:(id)arg1 error:(id*)arg2;
+ (id)fieldsForUnprotectedSerialization;
+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isChangeRecord:(id)arg1;
+ (bool)isChangeRecord:(id)arg1 inSequence:(id)arg2;
+ (bool)isChangeRecordID:(id)arg1;
+ (id)nonAssetKeys;
+ (id)recordType;
+ (id)recordWithCKRecord:(id)arg1 error:(id*)arg2;
+ (bool)requiresUnderlyingMessage;

- (void).cxx_destruct;
- (long long)changeIndex;
- (id)changeSize;
- (id)changesetArchiveFileURL;
- (long long)compare:(id)arg1;
- (id)decodedSyncAnchorRangeMap;
- (id)description;
- (bool)finalForSequence;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (id)initWithSyncAnchorRangeMap:(id)arg1 changeIndex:(long long)arg2 changesetAsset:(id)arg3 changeSize:(long long)arg4 protocolVersion:(int)arg5 finalForSequence:(bool)arg6 sequenceRecordID:(id)arg7 record:(id)arg8 schemaVersion:(long long)arg9;
- (id)initWithSyncAnchorRangeMap:(id)arg1 finalForSequence:(bool)arg2 changesetArchiveFileHandle:(id)arg3 sequenceRecord:(id)arg4 protocolVersion:(int)arg5;
- (id)printDescription;
- (int)protocolVersion;
- (id)sequenceRecordID;
- (id)serializeUnderlyingMessage;
- (bool)shouldFetchAssetContentInMemory;

@end
