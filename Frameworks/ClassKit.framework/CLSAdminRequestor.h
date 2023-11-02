
@interface CLSAdminRequestor : CLSObject {
    NSString * _email;
    NSString * _note;
    NSDictionary * _serverRequestHeaders;
    long long  _state;
    NSString * _verificationCode;
}

@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *note;
@property (nonatomic, copy) NSDictionary *serverRequestHeaders;
@property (nonatomic) long long state;
@property (nonatomic, copy) NSString *verificationCode;

+ (id)_propertyNames;
+ (id)identifierForRequestorEmail:(id)arg1;
+ (id)stringForVerificationState:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (long long)verificationStateFromString:(id)arg1;

- (void).cxx_destruct;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmail:(id)arg1;
- (void)mergeWithObject:(id)arg1;
- (id)note;
- (void)reset;
- (id)serverRequestHeaders;
- (void)setEmail:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setServerRequestHeaders:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setVerificationCode:(id)arg1;
- (long long)state;
- (id)verificationCode;

@end
