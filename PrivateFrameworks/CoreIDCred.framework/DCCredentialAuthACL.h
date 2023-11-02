
@interface DCCredentialAuthACL : NSObject <NSSecureCoding> {
    NSData * _aclData;
    unsigned long long  _aclType;
}

@property (nonatomic, retain) NSData *aclData;
@property (nonatomic) unsigned long long aclType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)aclData;
- (unsigned long long)aclType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 type:(unsigned long long)arg2;
- (void)setAclData:(id)arg1;
- (void)setAclType:(unsigned long long)arg1;

@end
