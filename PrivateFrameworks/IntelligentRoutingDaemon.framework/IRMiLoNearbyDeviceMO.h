
@interface IRMiLoNearbyDeviceMO : NSManagedObject

@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic) bool hasBleRssi;
@property (nonatomic, retain) IRMiLoLSLPredictionMO *prediction;

+ (id)fetchRequest;
+ (id)miLoNearbyDeviceMOWithMiLoNearbyDeviceDO:(id)arg1 miloPrediction:(id)arg2 inManagedObjectContext:(id)arg3;
+ (void)setPropertiesOfMiLoNearbyDeviceMO:(id)arg1 withIRMiLoNearbyDeviceDO:(id)arg2;

- (id)convert;

@end
