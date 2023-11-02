
@interface IRRapportDeviceMO : NSManagedObject

@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic, retain) NSString *iCloudId;
@property (nonatomic, retain) NSString *idsID;
@property (nonatomic, retain) NSString *mediaRemoteIdentifier;
@property (nonatomic, retain) NSString *mediaRouteIdentifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) IRNodeMO *node;
@property (nonatomic, retain) NSString *rapportEffectiveID;

+ (id)aVOutputDeviceMOFromRapportDeviceDO:(id)arg1 inNode:(id)arg2 withManagedObjectContext:(id)arg3;
+ (id)fetchRequest;
+ (void)setPropertiesOfRapportDeviceMO:(id)arg1 withRapportDO:(id)arg2;

- (id)convert;

@end
