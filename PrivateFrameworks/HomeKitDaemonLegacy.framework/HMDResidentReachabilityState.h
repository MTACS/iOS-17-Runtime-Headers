
@interface HMDResidentReachabilityState : HMFObject <NSCopying, NSSecureCoding> {
    bool  _isReachable;
    NSUUID * _residentDeviceIdentifier;
}

@property (readonly) bool isReachable;
@property (readonly, copy) NSUUID *residentDeviceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithResidentDeviceIdentifier:(id)arg1 isReachable:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isReachable;
- (id)residentDeviceIdentifier;

@end
