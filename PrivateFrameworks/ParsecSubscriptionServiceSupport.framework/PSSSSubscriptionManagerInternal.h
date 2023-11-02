
@interface PSSSSubscriptionManagerInternal : NSObject {
    VSSubscriptionRegistrationCenter * _registrationCenter;
}

@property (nonatomic, retain) VSSubscriptionRegistrationCenter *registrationCenter;

- (void).cxx_destruct;
- (void)getActiveSubscriptionServicesMatchingBundleIdentifiers:(id)arg1 domainIdentifiers:(id)arg2 maximumExpirationLimit:(double)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (void)registerSubscriptionServiceForURL:(id)arg1 withSubscriptionInfo:(id)arg2 expirationDate:(id)arg3;
- (id)registrationCenter;
- (void)removeSubscriptionServiceForURL:(id)arg1;
- (void)removeWebSubscriptionServicesCreatedAfterDate:(id)arg1;
- (void)setRegistrationCenter:(id)arg1;

@end
