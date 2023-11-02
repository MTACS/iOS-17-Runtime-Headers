
@interface FinanceKit.ManagedOrderShippingFulfillment : NSManagedObject

@property (nonatomic, copy) NSString *carrier;
@property (nonatomic, copy) NSString *carrierIdentifier;
@property (nonatomic, copy) NSDate *deliveryDate;
@property (nonatomic, copy) NSDate *estimatedDeliveryDate;
@property (nonatomic, copy) NSString *estimatedDeliveryWindowDurationValue;
@property (nonatomic, copy) NSString *fulfillmentIdentifier;
@property (nonatomic, retain) NSSet *lineItemObjects;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *notes;
@property (nonatomic) short positionIndex;
@property (nonatomic, retain) CNPostalAddress *recipientAddress;
@property (nonatomic, copy) NSString *recipientFamilyName;
@property (nonatomic, copy) NSString *recipientGivenName;
@property (nonatomic, copy) NSString *recipientOrganizationName;
@property (nonatomic, copy) NSDate *shippedDate;
@property (nonatomic) short shippingTypeValue;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *statusDescription;
@property (nonatomic) short statusValue;
@property (nonatomic, copy) NSString *trackingNumber;
@property (nonatomic, copy) NSURL *trackingURL;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
