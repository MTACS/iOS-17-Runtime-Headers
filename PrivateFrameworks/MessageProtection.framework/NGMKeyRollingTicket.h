
@interface NGMKeyRollingTicket : NSObject {
    NGMFullPrekey * _prekey;
    NGMPublicDeviceIdentity * _registrationInfo;
}

@property (nonatomic, readonly) NGMFullPrekey *prekey;
@property (nonatomic, readonly) NGMPublicDeviceIdentity *registrationInfo;

- (void).cxx_destruct;
- (id)identityData;
- (id)initTicketWithSigningKey:(id)arg1 error:(id*)arg2;
- (id)prekey;
- (id)prekeyData;
- (id)publicDeviceIdentity;
- (id)registrationInfo;

@end
