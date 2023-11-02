
@interface NEProxyServer : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSString * _address;
    bool  _authenticationRequired;
    NSString * _password;
    long long  _port;
    long long  _type;
    NSString * _username;
}

@property (readonly) NSString *address;
@property bool authenticationRequired;
@property (copy) NSString *password;
@property (readonly) long long port;
@property long long type;
@property (copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (bool)authenticationRequired;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyPassword;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAddress:(id)arg1 port:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 address:(id)arg2 port:(long long)arg3;
- (id)password;
- (long long)port;
- (void)setAuthenticationRequired:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUsername:(id)arg1;
- (long long)type;
- (id)username;

@end
