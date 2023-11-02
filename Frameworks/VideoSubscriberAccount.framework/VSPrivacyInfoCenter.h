
@interface VSPrivacyInfoCenter : NSObject <VSManagedProfileConnectionObserver> {
    long long  _accountAccessStatus;
    int  _registrationToken;
}

@property (nonatomic) long long accountAccessStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int registrationToken;
@property (readonly) Class superclass;

+ (id)sharedPrivacyInfoCenter;

- (void)_invalidateAccountAccessStatus;
- (long long)accountAccessStatus;
- (void)dealloc;
- (id)init;
- (void)profileConnectionProfileChanged:(id)arg1;
- (void)profileConnectionSettingsChanged:(id)arg1;
- (int)registrationToken;
- (void)setAccountAccessStatus:(long long)arg1;
- (void)setRegistrationToken:(int)arg1;
- (id)updateAccountAccessStatusWithError:(id)arg1;
- (void)updateAccountAccessStatusWithResponse:(id)arg1;

@end
