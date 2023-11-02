
@interface FinanceKit.ManagedOrderReceipt : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *localizationName;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, copy) NSString *name;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
