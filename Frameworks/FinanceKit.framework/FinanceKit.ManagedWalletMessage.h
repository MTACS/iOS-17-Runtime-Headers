
@interface FinanceKit.ManagedWalletMessage : NSManagedObject

@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic) short messageTypeValue;
@property (nonatomic, copy) NSString *orderFulfillmentIdentifier;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic) long long priority;
@property (nonatomic, copy) NSString *title;

- (void)didSave;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
