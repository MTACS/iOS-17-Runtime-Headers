
@interface ManagedAssetResumableLoad : NSManagedObject

@property (nonatomic) long long downloadToken;
@property (nonatomic, copy) NSString *localURL;
@property (nonatomic, copy) NSString *remoteURL;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
