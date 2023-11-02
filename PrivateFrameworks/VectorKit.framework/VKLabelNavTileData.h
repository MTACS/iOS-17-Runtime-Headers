
@interface VKLabelNavTileData : NSObject {
    bool  _foundTileEdgeJunctions;
    NSMapTable * _geoJunctionToJunctionMap;
    struct vector<LabelNavJunctionInfo, geo::StdAllocator<LabelNavJunctionInfo, mdm::Allocator>> { 
        struct LabelNavJunctionInfo {} *__begin_; 
        struct LabelNavJunctionInfo {} *__end_; 
        struct __compressed_pair<LabelNavJunctionInfo *, geo::StdAllocator<LabelNavJunctionInfo, mdm::Allocator>> { 
            struct LabelNavJunctionInfo {} *__value_; 
            struct StdAllocator<LabelNavJunctionInfo, mdm::Allocator> { 
                struct Allocator {} *_allocator; 
            } __value_; 
        } __end_cap_; 
    }  _junctionInfos;
    NSMutableArray * _oppositeCarriagewayJunctions;
    bool  _oppositeCarriagewayJunctionsValid;
    struct shared_ptr<md::LabelTile> { 
        struct LabelTile {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _tile;
    NSMutableArray * _tileEdgeJunctions;
}

@property (nonatomic, readonly, retain) NSMutableArray *oppositeCarriagewayJunctions;
@property (nonatomic) bool oppositeCarriagewayJunctionsValid;
@property (nonatomic, readonly) const void*tile;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_findTileEdgeJunctions;
- (void)addJunction:(id)arg1;
- (void)appendNavJunctionsInWorldRect:(const void*)arg1 junctions:(id)arg2;
- (void)findOppositeCarriagewayJunctionsWithRouteFeatures:(void*)arg1 distanceThreshold:(double)arg2;
- (id)findTileEdgeJunctionAtCoordinate:(struct Matrix<float, 2, 1> { float x1[2]; })arg1;
- (id)initWithTile:(const void*)arg1;
- (void)initializeJunctionInfos;
- (id)junctionAtCoordinate:(struct Matrix<float, 2, 1> { float x1[2]; })arg1;
- (id)junctionForGeoJunction:(struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; }*)arg1;
- (id)oppositeCarriagewayJunctions;
- (bool)oppositeCarriagewayJunctionsValid;
- (void)setOppositeCarriagewayJunctionsValid:(bool)arg1;
- (const void*)tile;

@end
