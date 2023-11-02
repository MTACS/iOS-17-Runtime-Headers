
@interface MapsSync.MapsSyncCollectionPlaceItem : MapsSync.MapsSyncCollectionItem {
    void _customName;
    void _droppedPinCoordinate;
    void _droppedPinFloorOrdinal;
    void _latitude;
    void _longitude;
    void _mapItemStorage;
    void _muid;
    void _origin;
}

@property (nonatomic, readonly) NSString *customName;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) GEOLatLng *droppedPinCoordinate;
@property (nonatomic, readonly) int droppedPinFloorOrdinal;
@property (nonatomic, readonly) NSNumber *latitude;
@property (nonatomic, readonly) NSNumber *longitude;
@property (nonatomic, readonly) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, readonly) NSNumber *muid;
@property (nonatomic, readonly) short origin;

+ (void)fetchNearbyPlacesWithLatitude:(double)arg1 longitude:(double)arg2 callbackQueue:(id)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(void*)arg1;
- (id)customName;
- (id)description;
- (id)droppedPinCoordinate;
- (int)droppedPinFloorOrdinal;
- (id)initWithCollection:(id)arg1;
- (id)initWithObject:(id)arg1;
- (bool)isDuplicateOfOther:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)latitude;
- (id)longitude;
- (Class)managedObjectClass;
- (id)mapItemStorage;
- (id)muid;
- (Class)mutableObjectClass;
- (short)origin;
- (void)setPropertiesWithObject:(id)arg1;

@end
