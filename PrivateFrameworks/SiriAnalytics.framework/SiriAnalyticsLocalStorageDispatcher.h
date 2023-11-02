
@interface SiriAnalyticsLocalStorageDispatcher : NSObject <SiriAnalyticsMessageStorage> {
    void messageStore;
    void plusStream;
    void queue;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithQueue:(id)arg1 messageStore:(id)arg2 plusStream:(id)arg3;
- (void)storeMessages:(id)arg1;

@end
