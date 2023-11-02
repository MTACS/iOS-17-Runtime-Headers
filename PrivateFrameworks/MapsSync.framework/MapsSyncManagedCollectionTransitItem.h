
@interface MapsSyncManagedCollectionTransitItem : MapsSyncManagedCollectionItem

@property (nonatomic) long long muid;
@property (nonatomic, copy) NSData *transitLineStorage;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
