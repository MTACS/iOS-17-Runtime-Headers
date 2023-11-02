
@interface _MKDynamicTileOverlay : NSObject <MKOverlay, _MKOverlayTileDataSource> {
    long long  _maximumZ;
    long long  _minimumZ;
    unsigned int  _providerID;
}

@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingMapRect;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isGeometryFlipped, readonly) bool geometryFlipped;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maximumZ;
@property (nonatomic) long long minimumZ;
@property (getter=_providerID, nonatomic, readonly) unsigned int providerID;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void)_cancelLoadingTileAtPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1;
- (unsigned int)_providerID;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (void)cancelLoadingTileAtPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)init;
- (bool)isGeometryFlipped;
- (void)loadTileAtPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1 result:(id /* block */)arg2;
- (long long)maximumZ;
- (long long)minimumZ;
- (void)setMaximumZ:(long long)arg1;
- (void)setMinimumZ:(long long)arg1;

@end
