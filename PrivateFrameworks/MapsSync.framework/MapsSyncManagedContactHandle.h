
@interface MapsSyncManagedContactHandle : NSManagedObject

@property (nonatomic, retain) MapsSyncManagedFavoriteItem *favoriteItem;
@property (nonatomic, copy) NSString *handle;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
