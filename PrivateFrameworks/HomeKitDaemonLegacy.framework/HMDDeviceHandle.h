
@interface HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding> {
    _HMDDeviceHandle * _internal;
}

@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy) NSString *destination;
@property (getter=isGlobal, readonly) bool global;
@property (readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) _HMDDeviceHandle *internal;
@property (getter=isLocal, readonly) bool local;
@property (readonly, copy) NSData *pushToken;

+ (id)deviceHandleForDestination:(id)arg1;
+ (id)deviceHandleForDeviceIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountHandle;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternal:(id)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (bool)isGlobal;
- (bool)isLocal;
- (bool)matchesPushToken:(id)arg1;
- (id)pushToken;
- (id)shortDescription;

@end
