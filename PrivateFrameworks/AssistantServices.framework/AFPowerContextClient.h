
@interface AFPowerContextClient : NSObject {
    int  _notificationToken;
    unsigned int  _registrationStatus;
}

- (bool)_isNotificationTokenRegistered;
- (void)_registerForDarwinNotificationIfNeeded;
- (unsigned long long)currentEncodedPowerPolicyWithError:(id*)arg1;
- (id)currentPowerPolicyWithError:(id*)arg1;
- (id)init;
- (bool)updateCurrentPowerPolicy:(id)arg1 withError:(id*)arg2;

@end
