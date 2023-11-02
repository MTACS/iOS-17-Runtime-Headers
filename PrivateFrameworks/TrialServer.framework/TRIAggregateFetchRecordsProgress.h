
@interface TRIAggregateFetchRecordsProgress : NSObject {
    _PASLock * _lock;
    id /* block */  _progress;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (double)_fractionCompletedWithGuardedData:(id)arg1;
- (void)_issueCurrentProgressWithGuardedData:(id)arg1;
- (double)fractionCompleted;
- (id)initWithProgressBlock:(id /* block */)arg1;
- (void)registerMAAsset:(id)arg1 withExpectedSize:(unsigned long long)arg2;
- (void)registerRecordId:(id)arg1 withExpectedSize:(unsigned long long)arg2;
- (void)setComplete;
- (void)setFractionCompleted:(double)arg1 forMAAsset:(id)arg2;
- (void)setFractionCompleted:(double)arg1 forRecordId:(id)arg2;
- (void)unregisterMAAsset:(id)arg1;
- (void)unregisterRecordId:(id)arg1;

@end
