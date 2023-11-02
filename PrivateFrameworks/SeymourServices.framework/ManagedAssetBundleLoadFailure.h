
@interface ManagedAssetBundleLoadFailure : NSManagedObject

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *reason;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
