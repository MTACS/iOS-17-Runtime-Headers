
@interface FinanceKit.ManagedOrderWebServiceLogEntry : NSManagedObject

@property (nonatomic, copy) NSDate *date;
@property (nonatomic) short levelValue;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) _TtC10FinanceKit22ManagedOrderWebService *orderWebService;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;

@end
