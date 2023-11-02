
@interface DRSConfigMetadataMO : NSManagedObject

@property (nonatomic, copy) NSDate *appliedDate;
@property (nonatomic, copy) NSDate *completedDate;
@property (nonatomic, copy) NSString *completionDescription;
@property (nonatomic) long long completionType;
@property (nonatomic, retain) DRConfigMO *configMO;
@property (nonatomic, copy) NSUUID *configUUID;
@property (nonatomic) bool logTelemetry;
@property (nonatomic, copy) NSDate *receivedDate;
@property (nonatomic) bool reportToDecisionServer;
@property (nonatomic) short state;
@property (nonatomic, copy) NSString *teamID;

+ (id)fetchRequest;

@end
