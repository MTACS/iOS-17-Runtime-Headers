
@interface IISMetricStore : NSObject {
    void configuration;
    void enrichmentProviders;
    void messageListeners;
    void sendInterval;
    void storageLock;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  windowStartDate;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)registerEnrichmentProvider:(id)arg1;
- (void)registerMessageListener:(id /* block */)arg1;
- (void)removeAllMetricsWithPrefix:(id)arg1;
- (id)saveMessage:(id)arg1 backend:(unsigned char)arg2 messageIdentifier:(id)arg3;
- (bool)sendMessagesWithShouldContinue:(id /* block */)arg1;
- (bool)shouldSendMessages;

@end
