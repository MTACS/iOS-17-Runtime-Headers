
@interface CWFEAPCredentials : NSObject <NSCopying, NSSecureCoding> {
    void * _TLSIdentityHandle;
    NSString * _password;
    NSString * _username;
}

@property (nonatomic, copy) struct __SecIdentity { }*TLSIdentity;
@property (nonatomic, copy) void*TLSIdentityHandle;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct __SecIdentity { }*)TLSIdentity;
- (void*)TLSIdentityHandle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEAPCredentials:(id)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (void)setTLSIdentity:(struct __SecIdentity { }*)arg1;
- (void)setTLSIdentityHandle:(void*)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
