
@interface MKFLocalAppleMediaSensorPairing : HMDManagedObject

@property (nonatomic, copy) NSUUID *pairedSensorUUID;

+ (id)fetchRequest;

@end
