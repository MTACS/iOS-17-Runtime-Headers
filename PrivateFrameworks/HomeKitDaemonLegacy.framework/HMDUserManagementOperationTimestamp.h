
@interface HMDUserManagementOperationTimestamp : HMFObject <NSSecureCoding> {
    HMDDevice * _device;
    NSNumber * _state;
    NSDate * _timestamp;
}

@property (readonly) HMDDevice *device;
@property (readonly) NSNumber *state;
@property (readonly) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 state:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)shortDescription;
- (id)state;
- (id)timestamp;

@end
