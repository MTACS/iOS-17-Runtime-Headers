
@interface TransparencyIDSRegistrationRequestData : NSObject <NSSecureCoding> {
    NSString * _application;
    NSData * _pushToken;
    NSData * _tbsKTIDSRegistrationData;
}

@property (retain) NSString *application;
@property (retain) NSData *pushToken;
@property (retain) NSData *tbsKTIDSRegistrationData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)application;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithApplication:(id)arg1 registrationData:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)pushToken;
- (void)setApplication:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setTbsKTIDSRegistrationData:(id)arg1;
- (id)tbsKTIDSRegistrationData;

@end
