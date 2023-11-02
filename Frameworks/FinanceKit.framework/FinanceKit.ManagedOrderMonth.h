
@interface FinanceKit.ManagedOrderMonth : NSManagedObject

@property (nonatomic) short countOfOrders;
@property (nonatomic) short countOfOrdersThatShowAsActive;
@property (nonatomic) short month;
@property (nonatomic, retain) NSSet *orders;
@property (nonatomic) short year;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
