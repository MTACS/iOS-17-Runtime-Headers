
@interface HDCountryMonitorControlServer : HDStandardTaskServer <HKCountryMonitorControlServer> {
    HDOTAFeatureAvailabilityManager * _OTAFeatureAvailabilityManager;
    HDPeriodicCountryMonitor * _countryMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_fetchCurrentISOCountryCodeAndNotifyObserversWithCompletion:(id /* block */)arg1;

@end
