
@interface _HMDGlobalDeviceHandle : _HMDDeviceHandle {
    HMDAccountHandle * _accountHandle;
    NSData * _pushToken;
}

@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (nonatomic, readonly, copy) NSData *pushToken;

+ (bool)isValidDestination:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountHandle;
- (id)description;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(id)arg1;
- (id)initWithPushToken:(id)arg1 accountHandle:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isGlobal;
- (id)privateDescription;
- (id)pushToken;

@end
