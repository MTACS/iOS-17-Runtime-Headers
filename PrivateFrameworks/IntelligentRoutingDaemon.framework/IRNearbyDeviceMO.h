
@interface IRNearbyDeviceMO : NSManagedObject

@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic, copy) NSDate *measurementDate;
@property (nonatomic, copy) NSString *mediaRemoteIdentifier;
@property (nonatomic, retain) IRNearbyDeviceContainerMO *nearbyDeviceContainer;
@property (nonatomic, copy) NSString *proximityType;
@property (nonatomic) double range;

+ (id)fetchRequest;
+ (id)nearbyDeviceMOWithNearbyDeviceDO:(id)arg1 nearbyDeviceContainer:(id)arg2 inManagedObjectContext:(id)arg3;
+ (void)setPropertiesOfnearbyDeviceMO:(id)arg1 withNearbyDeviceDO:(id)arg2;

- (id)convert;

@end
