
@interface PKSEConsistencyCheckDeviceCredential : NSObject {
    PKSECredentialAddress * _address;
    PKSEConsistencyCheckDeviceCredentialAppletProperties * _appletProperties;
    long long  _credentialType;
    PKSEConsistencyCheckDeviceCredentialISO18013Properties * _isoProperties;
    NSData * _keyMaterialHash;
    bool  _shouldRegister;
    unsigned long long  _state;
    unsigned long long  _type;
    NSNumber * _underlyingCredentialState;
}

@property (nonatomic, readonly) PKSECredentialAddress *address;
@property (nonatomic, retain) PKSEConsistencyCheckDeviceCredentialAppletProperties *appletProperties;
@property (nonatomic) long long credentialType;
@property (nonatomic, retain) PKSEConsistencyCheckDeviceCredentialISO18013Properties *isoProperties;
@property (nonatomic, readonly) NSData *keyMaterialHash;
@property (nonatomic, readonly) bool shouldRegister;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, retain) NSNumber *underlyingCredentialState;

+ (id)deviceCredentialWithApplet:(id)arg1;
+ (id)deviceCredentialWithDAKeyInformation:(id)arg1;
+ (id)deviceCredentialWithISOCredentialProperties:(id)arg1 hasKeyMeterial:(bool)arg2;

- (void).cxx_destruct;
- (id)address;
- (id)appletProperties;
- (long long)credentialType;
- (id)description;
- (id)init;
- (id)initWithType:(unsigned long long)arg1 state:(unsigned long long)arg2 underlyingCredentialState:(id)arg3 address:(id)arg4;
- (id)isoProperties;
- (id)keyMaterialHash;
- (void)setAppletProperties:(id)arg1;
- (void)setCredentialType:(long long)arg1;
- (void)setIsoProperties:(id)arg1;
- (void)setUnderlyingCredentialState:(id)arg1;
- (bool)shouldRegister;
- (unsigned long long)state;
- (unsigned long long)type;
- (id)underlyingCredentialState;

@end
