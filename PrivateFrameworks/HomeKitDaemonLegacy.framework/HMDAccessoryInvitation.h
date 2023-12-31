
@interface HMDAccessoryInvitation : HMFObject <NSSecureCoding> {
    HMDAccessory * _accessory;
    NSUUID * _identifier;
    long long  _state;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) long long state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessory;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithAccessory:(id)arg1 identifier:(id)arg2 state:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (long long)state;

@end
