
@interface FinanceDaemon.WalletMessagingProvider : NSObject <PDApplicationMessageProvider> {
    void coreDataStore;
    void messageSink;
}

+ (id)makeProvider;

- (void).cxx_destruct;
- (id)applicationMessageSink:(id)arg1 createContentForMessageWithRegistration:(id)arg2;
- (void)applicationMessageSink:(id)arg1 removedMessageWithRegistration:(id)arg2;
- (void)applicationMessageSink:(id)arg1 tappedMessageWithRegistration:(id)arg2;
- (void)connectApplicationMessageSink:(id)arg1;
- (id)init;
- (void)processMessagesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
