
@interface FinanceKit.ManagedOrderApplication : NSManagedObject

@property (nonatomic, copy) NSString *customProductPageIdentifier;
@property (nonatomic, copy) NSURL *launchURL;
@property (nonatomic) short positionIndex;
@property (nonatomic) long long storeIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
