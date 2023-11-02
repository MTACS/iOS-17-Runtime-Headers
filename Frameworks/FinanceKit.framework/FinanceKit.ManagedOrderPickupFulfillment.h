
@interface FinanceKit.ManagedOrderPickupFulfillment : NSManagedObject

@property (nonatomic, retain) CNPostalAddress *address;
@property (nonatomic, retain) _TtC10FinanceKit19ManagedOrderBarcode *barcode;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *displayName;
@property (nonatomic, copy) NSString *fulfillmentIdentifier;
@property (nonatomic, copy) NSSet *lineItemObjects;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *notes;
@property (nonatomic, copy) NSDate *pickedUpDate;
@property (nonatomic, copy) NSDate *pickupDate;
@property (nonatomic, copy) NSString *pickupWindowDurationValue;
@property (nonatomic) short positionIndex;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *statusDescription;
@property (nonatomic) short statusValue;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
