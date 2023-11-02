
@interface PKContactlessCardIngester : NSObject <NFRemoteAdminEventListener> {
    id /* block */  _cardSessionTokenCompletionHandler;
    NSObject<OS_dispatch_queue> * _contactlessCardIngesterQueue;
    NSNumberFormatter * _currencyNumberFormatter;
    <PKContactlessCardIngesterDelegate> * _delegate;
    id /* block */  _disableCardCompletionHandler;
    bool  _listening;
    NSString * _pushTopic;
    PKPaymentProvisioningMethodMetadata * _readerModeProvisioningMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)debugDescriptionForStatus:(unsigned long long)arg1;
+ (bool)isSupported;

- (void).cxx_destruct;
- (void)_cancelCardIngestion;
- (id)_displayableErrorForSPStatusCode:(unsigned long long)arg1 seldError:(id)arg2;
- (void)_ingestCardWithCardSessionToken:(id)arg1 completion:(id /* block */)arg2;
- (void)_ingestCardWithCompletion:(id /* block */)arg1;
- (void)_startListeningToRemoteAdminEventsIfRequired;
- (void)_stopListeningToRemoteAdminEvents;
- (void)ingestCardWithCardSessionToken:(id)arg1 successHandler:(id /* block */)arg2;
- (void)ingestCardWithSuccessHandler:(id /* block */)arg1;
- (id)initWithPaymentSetupProduct:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (void)readerModeCardIngestionStatus:(unsigned long long)arg1;
- (void)readerModeCardSessionToken:(id)arg1;

@end
