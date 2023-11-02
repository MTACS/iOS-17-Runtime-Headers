
@interface FDWalletMessagingProvider : NSObject <PDApplicationMessageProvider> {
    _TtC13FinanceDaemon23WalletMessagingProvider * _wrappedProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _TtC13FinanceDaemon23WalletMessagingProvider *wrappedProvider;

- (void).cxx_destruct;
- (id)applicationMessageSink:(id)arg1 createContentForMessageWithRegistration:(id)arg2;
- (void)applicationMessageSink:(id)arg1 removedMessageWithRegistration:(id)arg2;
- (void)applicationMessageSink:(id)arg1 tappedMessageWithRegistration:(id)arg2;
- (void)connectApplicationMessageSink:(id)arg1;
- (id)init;
- (void)processMessagesWithCompletionHandler:(id /* block */)arg1;
- (void)setWrappedProvider:(id)arg1;
- (id)wrappedProvider;

@end
