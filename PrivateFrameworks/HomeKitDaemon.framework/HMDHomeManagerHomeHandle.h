
@interface HMDHomeManagerHomeHandle : HMFObject <NSSecureCoding> {
    NSUUID * _backingStoreUUID;
    NSUUID * _homeUUID;
}

@property (readonly) NSUUID *backingStoreUUID;
@property (readonly) NSUUID *homeUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)backingStoreUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)homeUUID;
- (id)initWithBackingStoreUUID:(id)arg1 homeUUID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;

@end
