
@interface PKSecureElementConsistencyCheckDeviceState : NSObject {
    NSArray * _applets;
    NSArray * _deviceCredentials;
    NSArray * _devicePaymentApplications;
    NSArray * _passCredentials;
    NSDictionary * _passIsoBlobHashForCredentialIdentifier;
}

@property (nonatomic, retain) NSArray *applets;
@property (nonatomic, retain) NSArray *deviceCredentials;
@property (nonatomic, retain) NSArray *devicePaymentApplications;
@property (nonatomic, retain) NSArray *passCredentials;
@property (nonatomic, retain) NSDictionary *passIsoBlobHashForCredentialIdentifier;

- (void).cxx_destruct;
- (id)applets;
- (id)deviceCredentials;
- (id)devicePaymentApplications;
- (id)passCredentials;
- (id)passIsoBlobHashForCredentialIdentifier;
- (void)setApplets:(id)arg1;
- (void)setDeviceCredentials:(id)arg1;
- (void)setDevicePaymentApplications:(id)arg1;
- (void)setPassCredentials:(id)arg1;
- (void)setPassIsoBlobHashForCredentialIdentifier:(id)arg1;

@end
