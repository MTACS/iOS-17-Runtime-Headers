
@interface HMDRPIdentity : HMFObject <NSCopying, NSSecureCoding> {
    HMFKey * _deviceIRK;
}

@property (readonly, copy) HMFKey *deviceIRK;

+ (id)identityWithRPIdentity:(id)arg1;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceIRK;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceIRK:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRPIndentity:(id)arg1;
- (id)logIdentifier;
- (id)shortDescription;

@end
