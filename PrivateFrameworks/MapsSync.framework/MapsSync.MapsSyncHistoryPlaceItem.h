
@interface MapsSync.MapsSyncHistoryPlaceItem : MapsSync.MapsSyncHistoryItem {
    void _latitude;
    void _longitude;
    void _mapItemStorage;
    void _muid;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _supersededSearchId;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSNumber *latitude;
@property (nonatomic, readonly) NSNumber *longitude;
@property (nonatomic, readonly) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, readonly) NSNumber *muid;
@property (nonatomic, readonly) NSUUID *supersededSearchId;

+ (void)fetchNearbyPlacesWithLatitude:(double)arg1 longitude:(double)arg2 callbackQueue:(id)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)description;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)latitude;
- (id)longitude;
- (Class)managedObjectClass;
- (id)mapItemStorage;
- (id)muid;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)arg1;
- (id)supersededSearchId;

@end
