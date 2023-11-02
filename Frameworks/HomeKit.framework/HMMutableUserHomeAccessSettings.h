
@interface HMMutableUserHomeAccessSettings : HMUserHomeAccessSettings

@property (getter=isAccessAllowedToAllAccessories) bool accessAllowedToAllAccessories;
@property (copy) NSSet *allowedAccessoryCategoryTypes;
@property (copy) NSSet *allowedAccessoryIdentifiers;
@property (copy) NSSet *allowedRoomIdentifiers;
@property (copy) HMUserHomeAccessSchedule *schedule;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
