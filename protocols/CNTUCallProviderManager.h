
@protocol CNTUCallProviderManager <NSObject>

@required

- (CNObservable *)observableForCallProvidersChangedWithSchedulerProvider:(id <CNSchedulerProvider>)arg1;
- (<CNTUCallProvider> *)thirdPartyCallProviderWithBundleIdentifier:(NSString *)arg1;
- (NSArray *)thirdPartyCallProvidersForActionType:(NSString *)arg1;

@end
