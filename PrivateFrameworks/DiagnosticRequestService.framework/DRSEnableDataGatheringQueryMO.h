
@interface DRSEnableDataGatheringQueryMO : NSManagedObject

@property (nonatomic) short attemptCount;
@property (nonatomic, copy) NSString *build;
@property (nonatomic, retain) NSData *contextDictionaryData;
@property (nonatomic) bool isContinue;
@property (nonatomic, copy) NSString *issueCategory;
@property (nonatomic, copy) NSString *logType;
@property (nonatomic, copy) NSDate *queryDate;
@property (nonatomic, copy) NSUUID *queryID;
@property (nonatomic, copy) NSString *rejectionReason;
@property (nonatomic) short response;
@property (nonatomic, copy) NSString *teamID;

+ (id)fetchRequest;

@end
