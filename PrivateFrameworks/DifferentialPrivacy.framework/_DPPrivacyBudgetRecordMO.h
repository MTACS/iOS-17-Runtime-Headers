
@interface _DPPrivacyBudgetRecordMO : NSManagedObject

@property (nonatomic) long long balance;
@property (nonatomic) double cohortAggregateBalance;
@property (nonatomic) double creationDate;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) double lastUpdate;

@end
