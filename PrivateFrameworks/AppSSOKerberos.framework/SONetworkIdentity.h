
@interface SONetworkIdentity : NSObject {
    NSData * _auditToken;
    NSString * _bundleIdentifier;
    NSObject<OS_nw_path> * _lastpath;
    NSString * _networkFingerprint;
    bool  _perAppVPN;
    NSString * _realm;
}

@property (nonatomic, retain) NSData *auditToken;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSObject<OS_nw_path> *lastpath;
@property (nonatomic, retain) NSString *networkFingerprint;
@property (getter=isPerAppVPN, nonatomic) bool perAppVPN;
@property (nonatomic, retain) NSString *realm;

- (void).cxx_destruct;
- (id)auditToken;
- (id)bundleIdentifier;
- (void)determineNetworkFingerprint;
- (void)evaluateVPNPath;
- (void)evaluateVPNPath:(id)arg1;
- (void)evaluateVPNPathForHost:(id)arg1 port:(id)arg2;
- (id)getInterfaceFingerprintForDynamicInterface:(const char *)arg1;
- (id)getInterfaceSignature:(id)arg1;
- (id)getVPNServerSignature:(id)arg1;
- (id)initForRealm:(id)arg1 bundleIdentifier:(id)arg2 auditToken:(id)arg3;
- (bool)isPerAppVPN;
- (id)lastpath;
- (id)networkFingerprint;
- (id)realm;
- (void)setAuditToken:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setLastpath:(id)arg1;
- (void)setNetworkFingerprint:(id)arg1;
- (void)setPerAppVPN:(bool)arg1;
- (void)setRealm:(id)arg1;

@end
