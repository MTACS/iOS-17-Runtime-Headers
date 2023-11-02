
@interface GEOMapFeatureBuildingSection : NSObject {
    double  _baseHeight;
    unsigned long long  _coordinateCount;
    struct { double x1; double x2; } * _coordinates;
    GEOBuildingFootprintFeature * _feature;
    double  _height;
    double  _maxBaseHeight;
    double  _minBaseHeight;
    unsigned long long  _sectionIndex;
    double  _terrainElevation;
    GEOVectorTile * _tile;
    double  _topHeight;
}

@property (nonatomic, readonly) double baseHeight;
@property (nonatomic, readonly) unsigned long long coordinateCount;
@property (nonatomic, readonly) struct { double x1; double x2; }*coordinates;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double maxBaseHeight;
@property (nonatomic, readonly) double minBaseHeight;
@property (nonatomic, readonly) double terrainElevation;
@property (nonatomic, readonly) double topHeight;

- (void).cxx_destruct;
- (double)baseHeight;
- (unsigned long long)coordinateCount;
- (struct { double x1; double x2; }*)coordinates;
- (void)dealloc;
- (double)height;
- (id)initWithDaVinciTile:(id)arg1 buildingIndex:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3;
- (id)initWithFeature:(id)arg1 sectionIndex:(unsigned long long)arg2;
- (double)maxBaseHeight;
- (double)minBaseHeight;
- (double)terrainElevation;
- (double)topHeight;

@end
