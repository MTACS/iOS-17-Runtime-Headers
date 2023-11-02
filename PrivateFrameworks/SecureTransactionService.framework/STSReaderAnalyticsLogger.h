
@interface STSReaderAnalyticsLogger : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedCALogger;

- (void).cxx_destruct;
- (void)_postReaderSessionEvent:(id)arg1;
- (void)_postReaderTransactionEvent:(id)arg1 prepOnly:(bool)arg2;
- (id)init;
- (void)postReaderSessionEvent:(id)arg1;
- (void)postReaderTransactionEvent:(id)arg1 prepOnly:(bool)arg2;

@end
