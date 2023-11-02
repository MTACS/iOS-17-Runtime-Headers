
@interface ASPasswordCredentialRequest : NSObject <ASCredentialRequest> {
    ASPasswordCredentialIdentity * _credentialIdentity;
}

@property (nonatomic, readonly) <ASCredentialIdentity> *credentialIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)requestWithCredentialIdentity:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialIdentity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentialIdentity:(id)arg1;
- (long long)type;

@end
