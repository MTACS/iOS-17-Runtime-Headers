
@interface HDCloudSyncPullChangeRecordOperation : HDCloudSyncOperation {
    HDCloudSyncChangeRecord * _changeRecord;
    NSFileHandle * _fileHandle;
    HDCloudSyncSequenceRecord * _sequenceRecord;
    HDCloudSyncTarget * _target;
}

@property (nonatomic, readonly) HDCloudSyncChangeRecord *changeRecord;
@property (nonatomic, readonly) HDCloudSyncSequenceRecord *sequenceRecord;
@property (nonatomic, readonly) HDCloudSyncTarget *target;

+ (long long)progressCount;

- (void).cxx_destruct;
- (id)changeRecord;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3 sequenceRecord:(id)arg4 changeRecord:(id)arg5;
- (void)main;
- (id)sequenceRecord;
- (id)target;

@end
