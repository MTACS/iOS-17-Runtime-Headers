
@interface FinanceKit.ManagedOrderRegistration : NSManagedObject

@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, copy) NSDate *cancellationDate;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSString *deviceLibraryIdentifier;
@property (nonatomic) bool isMaybeRegistered;
@property (nonatomic, copy) NSDate *lastRequestAttemptDate;
@property (nonatomic, retain) _TtC10FinanceKit12ManagedOrder *order;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, retain) _TtC10FinanceKit16ManagedOrderType *orderType;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, retain) _TtC10FinanceKit22ManagedOrderWebService *orderWebService;
@property (nonatomic) long long requestAttemptCount;

- (void)awakeFromInsert;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;

@end
