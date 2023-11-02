
@interface ASPasswordCredential : NSObject <ASAuthorizationCredential> {
    NSString * _password;
    NSString * _user;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *password;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *user;

+ (id)credentialWithUser:(id)arg1 password:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2;
- (id)password;
- (id)user;

@end
