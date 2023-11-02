
@interface IRNearbyDeviceContainerMO : NSManagedObject

@property (nonatomic, retain) NSDate *freezeDateNIHomeDevice;
@property (nonatomic, retain) NSSet *nearbyDevices;
@property (nonatomic, retain) IRReplayEventMO *replayEvent;

+ (id)fetchRequest;
+ (id)nearbyDeviceContainerMOWithNearbyDeviceContainerDO:(id)arg1 replayEvent:(id)arg2 inManagedObjectContext:(id)arg3;
+ (void)setPropertiesOfNearbyDeviceContainerMO:(id)arg1 withNearbyDeviceContainerDO:(id)arg2 inManagedObjectContext:(id)arg3;

- (id)convert;

@end
