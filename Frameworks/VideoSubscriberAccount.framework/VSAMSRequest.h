
@interface VSAMSRequest : NSObject <NSCopying, NSSecureCoding> {
    VSAuditToken * _auditToken;
    NSString * _methodName;
    NSDictionary * _parameters;
    NSString * _providerIdentifier;
    unsigned long long  _requestType;
}

@property (nonatomic, retain) VSAuditToken *auditToken;
@property (nonatomic, copy) NSString *methodName;
@property (nonatomic, copy) NSDictionary *parameters;
@property (nonatomic, copy) NSString *providerIdentifier;
@property (nonatomic) unsigned long long requestType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)auditToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)methodName;
- (id)parameters;
- (id)providerIdentifier;
- (unsigned long long)requestType;
- (void)setAuditToken:(id)arg1;
- (void)setMethodName:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setProviderIdentifier:(id)arg1;
- (void)setRequestType:(unsigned long long)arg1;

@end
