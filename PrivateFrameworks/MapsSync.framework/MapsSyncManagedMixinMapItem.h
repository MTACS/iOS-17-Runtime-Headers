
@interface MapsSyncManagedMixinMapItem : NSManagedObject

@property (nonatomic, retain) MapsSyncManagedCollectionPlaceItem *collectionPlaceItem;
@property (nonatomic, retain) MapsSyncManagedFavoriteItem *favoriteItem;
@property (nonatomic, retain) MapsSyncManagedHistoryPlaceItem *historyPlaceItem;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSData *mapItemStorage;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
