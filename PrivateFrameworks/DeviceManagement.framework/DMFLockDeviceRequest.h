
@interface DMFLockDeviceRequest : DMFTaskRequest {
    NSString * _message;
    NSString * _phoneNumber;
    NSString * _pin;
}

@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *pin;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (id)phoneNumber;
- (id)pin;
- (void)setMessage:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPin:(id)arg1;

@end
