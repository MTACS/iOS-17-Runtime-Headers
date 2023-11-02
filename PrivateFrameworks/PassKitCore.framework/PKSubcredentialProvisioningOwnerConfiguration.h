
@interface PKSubcredentialProvisioningOwnerConfiguration : PKSubcredentialProvisioningLocalDeviceConfiguration {
    NSString * _appIdentifier;
    NSString * _issuerIdentifier;
    NSString * _keyName;
    NSString * _manufacturerIdentifier;
    NSString * _pairingPassword;
    unsigned long long  _radioTechnologies;
    PKAppletSubcredentialPairingSession * _session;
}

@property (nonatomic, retain) NSString *appIdentifier;
@property (nonatomic, readonly) NSString *issuerIdentifier;
@property (nonatomic, readonly) NSString *keyName;
@property (nonatomic, readonly) NSString *manufacturerIdentifier;
@property (nonatomic, readonly) NSString *pairingPassword;
@property (nonatomic, readonly) unsigned long long radioTechnologies;
@property (nonatomic, readonly) PKAppletSubcredentialPairingSession *session;

- (void).cxx_destruct;
- (id)appIdentifier;
- (id)description;
- (id)initWithSession:(id)arg1 pairingPassword:(id)arg2 keyName:(id)arg3 issuerIdentifier:(id)arg4 manufacturerIdentifier:(id)arg5 webService:(id)arg6 registrationMetadata:(id)arg7 radioTechnologies:(unsigned long long)arg8;
- (id)issuerIdentifier;
- (id)keyName;
- (id)manufacturerIdentifier;
- (id)pairingPassword;
- (unsigned long long)radioTechnologies;
- (id)session;
- (void)setAppIdentifier:(id)arg1;
- (long long)startingState;
- (id)transitionTable;

@end
