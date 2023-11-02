
@interface HMEPersistentConnectionClient : HMERouterClient {
    NSObject<OS_os_log> * _logger;
}

@property <HMEPersistentConnectionClientDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)didInvalidateConnection;
- (void)didReconnect;
- (void)finishedWritingToStore:(unsigned long long)arg1;
- (id)forwardingTopicsForTopics:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 storeReadHandle:(id)arg2 storeWriteHandle:(id)arg3;
- (id)initWithQueue:(id)arg1 storeReadHandle:(id)arg2 storeWriteHandle:(id)arg3 logger:(id)arg4;
- (bool)isActiveForSaving;
- (void)processReceivedCachedEventsFromMessage:(id)arg1;
- (void)processReceivedEventsFromMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned long long)willWriteToStore;

@end
