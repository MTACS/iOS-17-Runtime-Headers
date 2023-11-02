
@interface PSSSSubscriptionManager : NSObject {
    VSSubscriptionRegistrationCenter * _registrationCenter;
}

@property (nonatomic, retain) VSSubscriptionRegistrationCenter *registrationCenter;

- (void).cxx_destruct;
- (id)init;
- (void)registerSubscriptionWithInfo:(id)arg1 expirationDate:(id)arg2;
- (id)registrationCenter;
- (void)setRegistrationCenter:(id)arg1;
- (void)unregisterAllSubscriptions;
- (void)unregisterSubscriptionWithInfo:(id)arg1;

@end
