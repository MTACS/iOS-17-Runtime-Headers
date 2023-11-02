
@interface MTSDevicePairingFabric : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    NSString * _displayName;
    MTSDevicePairingEcosystem * _ecosystem;
    NSNumber * _identifier;
    NSNumber * _index;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) MTSDevicePairingEcosystem *ecosystem;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSNumber *identifier;
@property (readonly, copy) NSNumber *index;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid;

+ (id)UUIDFromIdentifier:(id)arg1 ecosystem:(id)arg2;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)ecosystem;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 ecosystem:(id)arg3;
- (id)initWithIdentifier:(id)arg1 index:(id)arg2 displayName:(id)arg3 ecosystem:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (id)shortDescription;
- (id)uuid;

@end
