
@interface ManagedAssetRequestReference : NSManagedObject

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) double expirationTime;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int priority;
@property (nonatomic, copy) NSString *remoteURL;
@property (nonatomic) double requestTime;
@property (nonatomic, copy) NSString *type;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
