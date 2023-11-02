
@interface FinanceKit.ManagedOrder : NSManagedObject

@property (nonatomic, copy) NSString *applePayTransactionIdentifier;
@property (nonatomic, copy) NSDate *archiveDate;
@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, copy) NSDate *automaticArchivingDate;
@property (nonatomic) bool automaticUpdatesEnabled;
@property (nonatomic, copy) NSDate *automaticUpdatesEnabledModificationDate;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic) bool effectiveAutomaticUpdatesEnabled;
@property (nonatomic) bool effectiveNotificationsEnabled;
@property (nonatomic) long long fetchSequenceNumber;
@property (nonatomic) bool isActive;
@property (nonatomic) bool isMarkedAsComplete;
@property (nonatomic, copy) NSDate *isMarkedAsCompleteModificationDate;
@property (nonatomic, copy) NSString *lastModifiedValue;
@property (nonatomic, copy) NSDate *lastRequestAttemptDate;
@property (nonatomic) bool notificationsEnabled;
@property (nonatomic, copy) NSDate *notificationsEnabledModificationDate;
@property (nonatomic, retain) _TtC10FinanceKit20ManagedOrderContents *orderContents;
@property (nonatomic, copy) NSDate *orderContentsModificationDate;
@property (nonatomic, copy) NSDate *orderContentsUpdatedDate;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, retain) _TtC10FinanceKit17ManagedOrderMonth *orderMonth;
@property (nonatomic, retain) _TtC10FinanceKit24ManagedOrderRegistration *orderRegistration;
@property (nonatomic, retain) _TtC10FinanceKit16ManagedOrderType *orderType;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, retain) _TtC10FinanceKit22ManagedOrderWebService *orderWebService;
@property (nonatomic, copy) NSDate *priorityEstimatedCompletionDate;
@property (nonatomic) long long requestAttemptCount;
@property (nonatomic) bool showsAsActive;
@property (nonatomic) short statusPriorityValue;
@property (nonatomic) long long updateSequenceNumber;

- (void)awakeFromInsert;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;
- (void)willSave;

@end
