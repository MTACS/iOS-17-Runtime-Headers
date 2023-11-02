
@interface DRSRequestMO : NSManagedObject

@property (nonatomic, copy) NSString *build;
@property (nonatomic, copy) NSString *ckRecordID;
@property (nonatomic, retain) NSData *contextDictionaryData;
@property (nonatomic) short decisionServerDecision;
@property (nonatomic, copy) NSString *errorDescription;
@property (nonatomic) bool hasBeenCountedByTelemetry;
@property (nonatomic) bool isExpedited;
@property (nonatomic, copy) NSString *issueCategory;
@property (nonatomic, copy) NSString *issueDescription;
@property (nonatomic, retain) NSOrderedSet *logs;
@property (nonatomic, copy) NSDate *requestDate;
@property (nonatomic, copy) NSUUID *requestID;
@property (nonatomic) long long requestMCT;
@property (nonatomic) long long requestState;
@property (nonatomic, copy) NSString *teamID;
@property (nonatomic) short uploadAttemptCount;

+ (id)fetchRequest;

@end
