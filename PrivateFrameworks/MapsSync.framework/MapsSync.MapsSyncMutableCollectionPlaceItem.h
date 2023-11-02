
@interface MapsSync.MapsSyncMutableCollectionPlaceItem : MapsSync.MapsSyncMutableCollectionItem {
    void _proxyCollectionPlaceItem;
}

@property (nonatomic, copy) NSString *customName;
@property (nonatomic, retain) GEOLatLng *droppedPinCoordinate;
@property (nonatomic) int droppedPinFloorOrdinal;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic) short origin;

- (void).cxx_destruct;
- (id)customName;
- (id)droppedPinCoordinate;
- (int)droppedPinFloorOrdinal;
- (id)initWithProxyObject:(id)arg1;
- (id)mapItemStorage;
- (short)origin;
- (void)setCustomName:(id)arg1;
- (void)setDroppedPinCoordinate:(id)arg1;
- (void)setDroppedPinFloorOrdinal:(int)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setOrigin:(short)arg1;

@end
