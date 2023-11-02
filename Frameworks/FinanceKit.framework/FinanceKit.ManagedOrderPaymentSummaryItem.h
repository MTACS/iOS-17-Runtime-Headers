
@interface FinanceKit.ManagedOrderPaymentSummaryItem : NSManagedObject

@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *label;
@property (nonatomic) short positionIndex;
@property (nonatomic, retain) NSDecimalNumber *valueAmount;
@property (nonatomic, copy) NSString *valueCurrencyCode;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
