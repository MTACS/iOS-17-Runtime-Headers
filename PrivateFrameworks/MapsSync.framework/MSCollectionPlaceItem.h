
@interface MSCollectionPlaceItem : MSCollectionItem {
    void _customName;
    void _droppedPinCoordinate;
    void _droppedPinFloorOrdinal;
    void _latitude;
    void _longitude;
    void _mapItemStorage;
    void _muid;
    void _origin;
}

@property (nonatomic, copy) NSString *customName;
@property (nonatomic, copy) NSData *droppedPinCoordinate;
@property (nonatomic) int droppedPinFloorOrdinal;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic) short origin;

+ (Class)managedClass;
+ (id)optionsWith:(id)arg1;
+ (id)strippedMapItemWith:(id)arg1;

- (void).cxx_destruct;
- (id)customName;
- (id)droppedPinCoordinate;
- (int)droppedPinFloorOrdinal;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 customName:(id)arg2 droppedPinCoordinate:(id)arg3 droppedPinFloorOrdinal:(int)arg4 latitude:(id)arg5 longitude:(id)arg6 muid:(id)arg7 origin:(short)arg8;
- (id)latitude;
- (id)longitude;
- (id)mapItemStorage;
- (id)muid;
- (short)origin;
- (void)setCustomName:(id)arg1;
- (void)setDroppedPinCoordinate:(id)arg1;
- (void)setDroppedPinFloorOrdinal:(int)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setMuid:(id)arg1;
- (void)setOrigin:(short)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;

@end
