
@interface DRConfigMO : NSManagedObject

@property (nonatomic, copy) NSString *build;
@property (nonatomic, copy) NSString *configDescription;
@property (nonatomic, copy) NSUUID *configUUID;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, retain) DRSConfigMetadataMO *metadata;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic) bool payloadIsJSON;
@property (nonatomic, copy) NSDate *receivedDate;
@property (nonatomic) bool skippedHysteresis;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSString *teamID;

+ (id)fetchRequest;

@end
