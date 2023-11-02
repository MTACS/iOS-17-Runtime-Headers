
@interface FinanceKit.ManagedUserNotification : NSManagedObject

@property (nonatomic, retain) UNNotificationContent *content;
@property (nonatomic, copy) NSString *notificationIdentifier;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic) bool requiresWallet;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
