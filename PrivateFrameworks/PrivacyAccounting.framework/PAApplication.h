
@interface PAApplication : NSObject <BMProtoBufWrapper, NSCopying, NSSecureCoding> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    PABridgedTCCIdentity * _bridgedAssumedIdentity;
    NSString * _bundleID;
    long long  _identifierType;
    int  _insecureProcessIdentifier;
    NSString * _path;
}

@property (nonatomic, readonly) NSObject<OS_tcc_identity> *assumedIdentity;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly) PABridgedTCCIdentity *bridgedAssumedIdentity;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *descriptionForIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long identifierType;
@property (nonatomic, readonly) int insecureProcessIdentifier;
@property (nonatomic, readonly) NSString *path;

+ (id)applicationForCurrentProcess;
+ (id)applicationWithAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)applicationWithBundleID:(id)arg1;
+ (id)applicationWithPath:(id)arg1;
+ (id)applicationWithType:(long long)arg1 identifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObject;
- (id)assumedIdentity;
- (struct { unsigned int x1[8]; })auditToken;
- (id)bridgedAssumedIdentity;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionForIdentifier;
- (id)descriptionForIdentifierType;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (long long)identifierType;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithBundleID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInProcessAssumedIdentity:(id)arg1;
- (id)initWithInProcessBridgedAssumedIdentity:(id)arg1;
- (id)initWithInProcessIdentity;
- (id)initWithInsecureProcessIdentifier:(int)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithTCCIdentity:(id)arg1;
- (id)initWithType:(long long)arg1 identifier:(id)arg2;
- (int)insecureProcessIdentifier;
- (bool)isEqual:(id)arg1;
- (id)path;
- (id)proto;

@end
