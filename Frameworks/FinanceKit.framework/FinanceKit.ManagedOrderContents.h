
@interface FinanceKit.ManagedOrderContents : NSManagedObject

@property (nonatomic, copy) NSArray *associatedApplicationIdentifiers;
@property (nonatomic, retain) NSSet *associatedApplicationObjects;
@property (nonatomic, retain) _TtC10FinanceKit19ManagedOrderBarcode *barcode;
@property (nonatomic) short changeNotificationsValue;
@property (nonatomic, copy) NSDate *createdDate;
@property (nonatomic, copy) NSString *customerEmailAddress;
@property (nonatomic, copy) NSString *customerFamilyName;
@property (nonatomic, copy) NSString *customerGivenName;
@property (nonatomic, copy) NSString *customerOrganizationName;
@property (nonatomic, copy) NSString *customerPhoneNumber;
@property (nonatomic) bool hasActiveFulfillment;
@property (nonatomic, retain) NSSet *images;
@property (nonatomic) short internalSchemaVersion;
@property (nonatomic, retain) NSSet *lineItemObjects;
@property (nonatomic, retain) _TtC10FinanceKit20ManagedOrderMerchant *merchant;
@property (nonatomic, retain) _TtC10FinanceKit16ManagedOrderData *orderData;
@property (nonatomic, copy) NSURL *orderManagementURL;
@property (nonatomic, copy) NSString *orderNumber;
@property (nonatomic) short orderTypeValue;
@property (nonatomic, retain) _TtC10FinanceKit19ManagedOrderPayment *payment;
@property (nonatomic, retain) NSSet *pickupFulfillmentObjects;
@property (nonatomic, copy) NSDate *priorityEstimatedCompletionDate;
@property (nonatomic, retain) NSSet *receipts;
@property (nonatomic) short schemaVersion;
@property (nonatomic, retain) NSSet *shippingFulfillmentObjects;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *statusDescription;
@property (nonatomic) short statusPriorityValue;
@property (nonatomic) short statusValue;
@property (nonatomic, copy) NSDate *updatedDate;

- (void).cxx_construct;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
