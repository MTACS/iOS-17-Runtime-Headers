
@interface GEOMapFeatureAccessFinder : NSObject {
    _GEOMapFeatureAccessRequest * _existingRequest;
    _GEOMapFeatureAccessRequestParameters * _requestParameters;
}

@property (nonatomic, retain) _GEOMapFeatureAccessRequestParameters *requestParameters;

- (void).cxx_destruct;
- (bool)_boundingCircle:(const void*)arg1 intersectsFeature:(id)arg2;
- (bool)_boundingCircle:(const void*)arg1 intersectsPoints:(struct GeoCodecsVectorTilePoint { float x1; float x2; }*)arg2 pointCount:(unsigned long long)arg3;
- (bool)_boundingCircle:(const void*)arg1 intersectsTransitLink:(id)arg2;
- (bool)_boundingCircle:(const void*)arg1 withBuildingTilePoints:(struct vector<GeoCodecsVectorTilePoint, std::allocator<GeoCodecsVectorTilePoint>> { struct GeoCodecsVectorTilePoint {} *x1; struct GeoCodecsVectorTilePoint {} *x2; struct __compressed_pair<GeoCodecsVectorTilePoint *, std::allocator<GeoCodecsVectorTilePoint>> { struct GeoCodecsVectorTilePoint {} *x_3_1_1; } x3; })arg2;
- (struct Sphere<float, 2, std::enable_if<true>> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; float x2; })_boundingCircleWithCenter:(struct { double x1; double x2; })arg1 radius:(double)arg2 inTile:(struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; })arg3;
- (bool)_featureHasValidGeometry:(id)arg1;
- (id)init;
- (id)initWithRequestParameters:(id)arg1;
- (id)requestParameters;
- (void)setExistingRequest:(id)arg1;
- (void)setRequestParameters:(id)arg1;

@end
