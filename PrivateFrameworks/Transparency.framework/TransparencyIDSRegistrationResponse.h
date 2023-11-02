
@interface TransparencyIDSRegistrationResponse : NSObject <NSSecureCoding> {
    NSDictionary * _registrationData;
}

@property (retain) NSDictionary *registrationData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)registrationData;
- (void)setRegistrationData:(id)arg1;

@end
