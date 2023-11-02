
@interface DRSCloudChannelConfigMO : NSManagedObject

@property (nonatomic) short channelType;
@property (nonatomic) short environment;
@property (nonatomic) bool overridesDeviceDefault;
@property (nonatomic) short platform;
@property (nonatomic, copy) NSNumber *populationSliceNumber;

+ (id)fetchRequest;

@end
