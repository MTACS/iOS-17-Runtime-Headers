
@interface WBSPublicKeyCredentialIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _credentialID;
    NSString * _groupID;
}

@property (nonatomic, readonly, copy) NSString *credentialID;
@property (nonatomic, readonly, copy) NSString *groupID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentialID:(id)arg1 groupID:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
