
@interface IRAVOutputDeviceMO : NSManagedObject

@property (nonatomic, retain) NSString *deviceID;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic) unsigned long long deviceSubType;
@property (nonatomic) unsigned long long deviceType;
@property (nonatomic) bool discoveredOverInfra;
@property (nonatomic) bool hasAirplayProperties;
@property (nonatomic, retain) NSString *modelID;
@property (nonatomic, retain) IRNodeMO *node;

+ (id)aVOutputDeviceMOFromAVOutputDeviceDO:(id)arg1 inNode:(id)arg2 withManagedObjectContext:(id)arg3;
+ (id)fetchRequest;
+ (void)setPropertiesOfAVOutputDeviceMO:(id)arg1 withAVOutputDevice:(id)arg2;

- (id)convert;

@end
