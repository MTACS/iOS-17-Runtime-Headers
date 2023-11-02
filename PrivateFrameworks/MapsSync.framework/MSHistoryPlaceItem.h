
@interface MSHistoryPlaceItem : MSHistoryItem {
    void _latitude;
    void _longitude;
    void _mapItemStorage;
    void _muid;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _supersededSearchId;
}

@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, copy) NSUUID *supersededSearchId;

+ (Class)managedClass;
+ (id)strippedMapItemWith:(id)arg1;

- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 muid:(id)arg4 supersededSearchId:(id)arg5;
- (id)latitude;
- (id)longitude;
- (id)mapItemStorage;
- (id)muid;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setMuid:(id)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
- (void)setSupersededSearchId:(id)arg1;
- (id)supersededSearchId;

@end
