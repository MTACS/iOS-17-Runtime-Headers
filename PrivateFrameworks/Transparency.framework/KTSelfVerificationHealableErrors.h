
@interface KTSelfVerificationHealableErrors : NSObject <NSSecureCoding> {
    NSMutableArray * __accountHealableErrors;
    NSMutableDictionary * __deviceIdToHealableErrors;
    unsigned long long  _healableState;
}

@property (retain) NSMutableArray *_accountHealableErrors;
@property (retain) NSMutableDictionary *_deviceIdToHealableErrors;
@property (readonly) NSArray *accountHealableErrors;
@property (readonly) NSDictionary *deviceIdToHealableErrors;
@property unsigned long long healableState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_accountHealableErrors;
- (id)_deviceIdToHealableErrors;
- (id)accountHealableErrors;
- (void)addAccountHealableError:(unsigned long long)arg1;
- (void)addDeviceHealableError:(unsigned long long)arg1 deviceId:(id)arg2;
- (void)addHealableState:(unsigned long long)arg1;
- (id)description;
- (id)deviceIdToHealableErrors;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)healableState;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)removeHealableState:(unsigned long long)arg1;
- (void)setHealableState:(unsigned long long)arg1;
- (void)set_accountHealableErrors:(id)arg1;
- (void)set_deviceIdToHealableErrors:(id)arg1;

@end
