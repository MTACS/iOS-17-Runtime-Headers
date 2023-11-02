
@interface MapsSyncManagedHistoryPlaceItem : MapsSyncManagedHistoryItem

@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) MapsSyncManagedMixinMapItem *mapItem;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, copy) NSUUID *supersededSearchId;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
