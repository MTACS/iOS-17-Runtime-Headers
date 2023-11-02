
@interface CASPasswordCredential : NSObject <NSSecureCoding> {
    NSString * _password;
    NSString * _user;
}

@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) NSString *user;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)password;
- (id)user;

@end
