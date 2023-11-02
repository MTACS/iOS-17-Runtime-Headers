
@interface HMDMutableMediaGroupsParticipantData : HMDMediaGroupsParticipantData

@property (copy) NSArray *backedUpGroups;
@property (copy) HMMediaDestination *destination;
@property (copy) HMMediaDestinationControllerData *destinationControllerData;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
