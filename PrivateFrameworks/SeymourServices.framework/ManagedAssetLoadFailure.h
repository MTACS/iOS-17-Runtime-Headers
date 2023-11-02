
@interface ManagedAssetLoadFailure : NSManagedObject

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *remoteURL;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
