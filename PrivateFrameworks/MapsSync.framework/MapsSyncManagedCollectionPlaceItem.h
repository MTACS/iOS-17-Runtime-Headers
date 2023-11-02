
@interface MapsSyncManagedCollectionPlaceItem : MapsSyncManagedCollectionItem

@property (nonatomic, copy) NSString *customName;
@property (nonatomic, copy) NSData *droppedPinCoordinate;
@property (nonatomic) int droppedPinFloorOrdinal;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) MapsSyncManagedMixinMapItem *mapItem;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic) short origin;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
