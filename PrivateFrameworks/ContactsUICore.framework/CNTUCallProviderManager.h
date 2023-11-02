
@interface CNTUCallProviderManager : NSObject <CNTUCallProviderManager> {
    TUCallProviderManager * _callProviderManager;
}

@property (nonatomic, copy) TUCallProviderManager *callProviderManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)callProviderManager;
- (id)init;
- (bool)isActionType:(id)arg1 supportedByProvider:(id)arg2;
- (bool)isFirstPartyCallProvider:(id)arg1;
- (id)observableForCallProvidersChangedWithSchedulerProvider:(id)arg1;
- (id)providerManagerQueue;
- (void)setCallProviderManager:(id)arg1;
- (id)thirdPartyCallProviderWithBundleIdentifier:(id)arg1;
- (id)thirdPartyCallProvidersForActionType:(id)arg1;

@end
