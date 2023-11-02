
@interface FinanceKit.ManagedOrderType : NSManagedObject

@property (nonatomic) long long countOfOrdersWithEffectiveAutomaticUpdatesEnabled;
@property (nonatomic, copy) NSString *deviceLibraryIdentifier;
@property (nonatomic) bool hasPushToken;
@property (nonatomic, copy) NSDate *lastRequestTokenAttemptDate;
@property (nonatomic, retain) NSSet *orderRegistrations;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, retain) NSSet *orderWebServices;
@property (nonatomic, retain) NSSet *orders;
@property (nonatomic, retain) NSSet *pendingApplePayOrders;
@property (nonatomic) long long propagateUpdateSequenceNumber;
@property (nonatomic, copy) NSData *pushToken;
@property (nonatomic) long long requestTokenAttemptCount;
@property (nonatomic) long long updateSequenceNumber;
@property (nonatomic) short updateTokenCount;
@property (nonatomic, copy) NSDate *updateTokenRefillDate;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (void)willSave;

@end
