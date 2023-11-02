
@interface GEOMapFeatureBuilding : NSObject {
    unsigned long long  _buildingID;
    GEOBuildingFootprintFeature * _feature;
    bool  _hasTerrainElevation;
    unsigned long long  _materialID;
    NSArray * _sections;
    GEOVectorTile * _tile;
    int  _tileSetStyle;
}

@property (nonatomic, readonly) unsigned long long buildingID;
@property (nonatomic, readonly) bool hasTerrainElevation;
@property (nonatomic, readonly) unsigned long long materialID;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) int tileSetStyle;

- (void).cxx_destruct;
- (unsigned long long)buildingID;
- (void)dealloc;
- (bool)hasTerrainElevation;
- (id)initWithDaVinciTile:(id)arg1 buildingIndex:(unsigned long long)arg2;
- (id)initWithFeature:(id)arg1;
- (unsigned long long)materialID;
- (id)sections;
- (int)tileSetStyle;

@end
