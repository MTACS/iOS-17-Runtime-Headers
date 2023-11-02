
@interface FinanceKit.ManagedOrderWebService : NSManagedObject

@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic) long long countOfLogEntries;
@property (nonatomic) long long countOfOrdersWithEffectiveAutomaticUpdatesEnabled;
@property (nonatomic) long long fetchChangesSequenceNumber;
@property (nonatomic, copy) NSString *lastModifiedValue;
@property (nonatomic, copy) NSDate *lastModifiedValueModificationDate;
@property (nonatomic, copy) NSDate *lastRequestAttemptDate;
@property (nonatomic, retain) NSSet *logEntries;
@property (nonatomic, retain) NSSet *orderRegistrations;
@property (nonatomic, retain) _TtC10FinanceKit16ManagedOrderType *orderType;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, retain) NSSet *orders;
@property (nonatomic, retain) NSSet *pendingApplePayOrders;
@property (nonatomic) long long requestAttemptCount;
@property (nonatomic) long long updateSequenceNumber;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;

@end
