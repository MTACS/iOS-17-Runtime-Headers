
@interface PBBridgeSatelliteAccountSignInContext : NSObject {
    NSDictionary * _acceptedTermsInfo;
    NSString * _pairingParentAltDSID;
    NSString * _pairingParentUsername;
    NSString * _password;
    NSString * _username;
}

@property (nonatomic, retain) NSDictionary *acceptedTermsInfo;
@property (nonatomic, retain) NSString *pairingParentAltDSID;
@property (nonatomic, retain) NSString *pairingParentUsername;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (id)acceptedTermsInfo;
- (id)pairingParentAltDSID;
- (id)pairingParentUsername;
- (id)password;
- (void)setAcceptedTermsInfo:(id)arg1;
- (void)setPairingParentAltDSID:(id)arg1;
- (void)setPairingParentUsername:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
