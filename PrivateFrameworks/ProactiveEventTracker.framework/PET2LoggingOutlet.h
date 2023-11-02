
@interface PET2LoggingOutlet : NSObject <PETLoggingOutlet> {
    NSMutableDictionary * _addKeys;
    NSObject<OS_os_transaction> * _batchTxn;
    NSObject<OS_dispatch_queue> * _loggingQueue;
    NSDictionary * _pet1HistogramBuckets;
    NSMutableDictionary * _updateKeys;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_dispatchBatchForKey:(id)arg1 value:(unsigned long long)arg2 isUpdate:(bool)arg3;
- (id)_findBucketsForKey:(id)arg1;
- (id)init;
- (void)logDoubleValue:(double)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;
- (void)logErrorForEvent:(id)arg1 featureId:(id)arg2 reason:(id)arg3;
- (void)logUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;
- (void)setUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;

@end
