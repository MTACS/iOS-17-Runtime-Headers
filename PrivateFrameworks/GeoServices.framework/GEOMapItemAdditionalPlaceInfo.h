
@interface GEOMapItemAdditionalPlaceInfo : NSObject {
    <GEOMapItem> * _mapItem;
    GEOPlace * _place;
}

@property (nonatomic, readonly) double areaInMeters;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic, readonly) <GEOMapItem> *mapItem;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) float photosMemoryScore;
@property (nonatomic, readonly) int placeType;

- (void).cxx_destruct;
- (double)areaInMeters;
- (struct { double x1; double x2; })coordinate;
- (id)initWithMapItem:(id)arg1;
- (id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3;
- (id)initWithPlace:(id)arg1;
- (id)mapItem;
- (id)mapRegion;
- (id)name;
- (float)photosMemoryScore;
- (int)placeType;

@end
