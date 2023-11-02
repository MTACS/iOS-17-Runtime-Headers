
@interface IRNodeMO : NSManagedObject

@property (nonatomic, retain) NSString *avOutpuDeviceIdentifier;
@property (nonatomic, retain) IRAVOutputDeviceMO *avOutputDevice;
@property (nonatomic, retain) IRCandidateMO *candidate;
@property (nonatomic, retain) NSString *idsIdentifier;
@property (nonatomic, retain) IRRapportDeviceMO *rapportDevice;
@property (nonatomic, retain) NSString *rapportIdentifier;

+ (id)fetchRequest;
+ (id)nodeMOFromNodeDO:(id)arg1 forCandidate:(id)arg2 inManagedObjectContext:(id)arg3;
+ (void)setPropertiesOfNodeMO:(id)arg1 withNodeDO:(id)arg2;

- (id)convert;

@end
