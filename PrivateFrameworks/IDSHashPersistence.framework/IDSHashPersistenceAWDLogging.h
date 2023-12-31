
@interface IDSHashPersistenceAWDLogging : NSObject {
    AWDServerConnection * _AWDServerConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_metricContainerForMetricType:(unsigned int)arg1;
- (void)_submitAWDMetric:(id)arg1 withContainer:(id)arg2;
- (void)dealloc;
- (void)duplicateMessageEncounted;
- (id)init;
- (bool)shouldSubmit;

@end
