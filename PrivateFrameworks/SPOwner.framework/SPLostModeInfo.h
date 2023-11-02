
@interface SPLostModeInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _email;
    NSString * _message;
    NSString * _phoneNumber;
    NSDate * _timestamp;
}

@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1 email:(id)arg2 phoneNumber:(id)arg3 timestamp:(id)arg4;
- (id)message;
- (id)phoneNumber;
- (void)setEmail:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
