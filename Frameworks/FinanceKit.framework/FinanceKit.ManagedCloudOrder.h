
@interface FinanceKit.ManagedCloudOrder : NSManagedObject

@property (nonatomic, copy) NSUUID *id;
@property (nonatomic) bool isMarkedAsComplete;
@property (nonatomic, copy) NSDate *isMarkedAsCompleteModificationDate;
@property (nonatomic, copy) NSData *orderData;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic) short schemaVersion;
@property (nonatomic, copy) NSDate *updatedDate;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
