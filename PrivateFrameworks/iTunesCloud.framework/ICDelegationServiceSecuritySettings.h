
@interface ICDelegationServiceSecuritySettings : NSObject {
    NSString * _password;
    long long  _securityMode;
}

@property (nonatomic, readonly, copy) NSString *password;
@property (nonatomic, readonly) long long securityMode;

+ (void)getDeviceReceiverSettingsWithCompletion:(id /* block */)arg1;
+ (void)getDeviceSenderSettingsForReceiverName:(id)arg1 securityMode:(long long)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_init;
- (id)description;
- (id)password;
- (long long)securityMode;

@end
