
@interface IDSToolKTSelfVerificationHealableErrors : NSObject <NSSecureCoding> {
    NSArray * _accountHealableErrors;
    NSDictionary * _deviceIdToHealableErrors;
    unsigned long long  _healableState;
}

@property NSArray *accountHealableErrors;
@property NSDictionary *deviceIdToHealableErrors;
@property unsigned long long healableState;

+ (bool)supportsSecureCoding;

- (id)accountHealableErrors;
- (id)deviceIdToHealableErrors;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)healableState;
- (id)initWithCoder:(id)arg1;
- (void)setAccountHealableErrors:(id)arg1;
- (void)setDeviceIdToHealableErrors:(id)arg1;
- (void)setHealableState:(unsigned long long)arg1;

@end
