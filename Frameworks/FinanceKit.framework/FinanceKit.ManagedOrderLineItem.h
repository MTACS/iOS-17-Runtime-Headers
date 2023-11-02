
@interface FinanceKit.ManagedOrderLineItem : NSManagedObject

@property (nonatomic, copy) NSString *gtin;
@property (nonatomic, copy) NSString *image;
@property (nonatomic) short positionIndex;
@property (nonatomic, retain) NSDecimalNumber *priceAmount;
@property (nonatomic, copy) NSString *priceCurrency;
@property (nonatomic) long long quantity;
@property (nonatomic, copy) NSString *sku;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *subtitle;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *title;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
