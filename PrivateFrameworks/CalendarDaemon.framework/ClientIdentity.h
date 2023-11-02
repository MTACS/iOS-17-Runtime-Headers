
@interface ClientIdentity : NSObject <NSSecureCoding> {
    NSString * _applicationIdentifier;
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSString * _bundleIdentifierShared;
    NSString * _clientName;
    NSString * _codeSigningIdentity;
    NSString * _localizedName;
    int  _pid;
    NSString * _teamIdentifier;
}

@property (nonatomic, readonly, copy) NSString *applicationIdentifier;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *clientName;
@property (nonatomic, readonly, copy) NSString *codeSigningIdentity;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly, copy) NSString *teamIdentifier;
@property (nonatomic, readonly, copy) NSString *untrustedBundleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (struct { unsigned int x1[8]; })auditToken;
- (id)bundleIdentifier;
- (id)clientName;
- (id)codeSigningIdentity;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (int)pid;
- (id)teamIdentifier;
- (id)untrustedBundleIdentifier;

@end
