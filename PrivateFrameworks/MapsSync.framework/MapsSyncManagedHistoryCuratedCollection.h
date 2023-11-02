
@interface MapsSyncManagedHistoryCuratedCollection : MapsSyncManagedHistoryItem

@property (nonatomic) long long curatedCollectionIdentifier;
@property (nonatomic) int resultProviderIdentifier;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
