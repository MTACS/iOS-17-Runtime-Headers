
@interface HMUserHomeAccessSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _accessAllowedToAllAccessories;
    NSSet * _allowedAccessoryCategoryTypes;
    NSSet * _allowedAccessoryIdentifiers;
    NSSet * _allowedRoomIdentifiers;
    HMUserHomeAccessSchedule * _schedule;
}

@property (getter=isAccessAllowedToAllAccessories) bool accessAllowedToAllAccessories;
@property (copy) NSSet *allowedAccessoryCategoryTypes;
@property (copy) NSSet *allowedAccessoryIdentifiers;
@property (copy) NSSet *allowedRoomIdentifiers;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (copy) HMUserHomeAccessSchedule *schedule;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedAccessoryCategoryTypes;
- (id)allowedAccessoryIdentifiers;
- (id)allowedRoomIdentifiers;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isAccessAllowedToAllAccessories;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)privateDescription;
- (id)schedule;
- (void)setAccessAllowedToAllAccessories:(bool)arg1;
- (void)setAllowedAccessoryCategoryTypes:(id)arg1;
- (void)setAllowedAccessoryIdentifiers:(id)arg1;
- (void)setAllowedRoomIdentifiers:(id)arg1;
- (void)setSchedule:(id)arg1;
- (id)shortDescription;

@end
