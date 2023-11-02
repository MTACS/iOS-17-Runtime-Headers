
@interface GEOSpatialPlaceLookupResultItem : NSObject {
    GEOMapRegion * _boundingRegion;
    NSArray * _mapItems;
}

@property (nonatomic, readonly) GEOMapRegion *boundingRegion;
@property (nonatomic, readonly) NSArray *mapItems;

- (void).cxx_destruct;
- (id)boundingRegion;
- (id)initWithMapItems:(id)arg1 boundingRegion:(id)arg2;
- (id)mapItems;

@end
