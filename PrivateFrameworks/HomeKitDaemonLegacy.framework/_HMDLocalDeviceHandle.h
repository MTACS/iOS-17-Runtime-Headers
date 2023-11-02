
@interface _HMDLocalDeviceHandle : _HMDDeviceHandle {
    NSUUID * _deviceIdentifier;
}

@property (nonatomic, readonly, copy) NSUUID *deviceIdentifier;

+ (bool)isValidDestination:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)destination;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(id)arg1;
- (id)initWithDeviceIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocal;
- (id)privateDescription;

@end
