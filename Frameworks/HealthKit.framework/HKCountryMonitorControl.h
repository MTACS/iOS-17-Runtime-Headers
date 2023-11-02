
@interface HKCountryMonitorControl : NSObject <HKCountryMonitorControlClient, _HKXPCExportable> {
    HKProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)checkCurrentCountry;
+ (void)checkCurrentCountryWithHealthStore:(id)arg1;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)exportedInterface;
- (void)fetchCurrentISOCountryCodeAndNotifyObserversWithCompletion:(id /* block */)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;

@end
