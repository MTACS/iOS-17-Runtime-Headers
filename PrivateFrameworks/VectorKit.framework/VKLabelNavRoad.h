
@interface VKLabelNavRoad : NSObject <VKLabelNavFeature> {
    bool  _areLabelsDisabled;
    bool  _cachedShieldVisibility;
    bool  _cachedSignVisibility;
    void * _data;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _direction2D;
    struct Matrix<float, 3, 1> { 
        float _e[3]; 
    }  _direction3D;
    bool  _hasVisibleShields;
    bool  _hasVisibleSigns;
    long long  _intraRoadPriorityForRoadLabel;
    long long  _intraRoadPriorityForShieldLabel;
    bool  _isGuidanceStepStart;
    bool  _isInGuidance;
    bool  _isOnRoute;
    bool  _isPicked;
    bool  _isRoadLabelUnique;
    bool  _isStartOfRoadName;
    bool  _isVisibilityCached;
    struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; } * _junctionA;
    struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; } * _junctionB;
    unsigned long long  _labelVertexIndexA;
    unsigned long long  _labelVertexIndexB;
    double  _length;
    struct optional<gss::LineType> { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[1]; 
            unsigned char type; 
        } _value; 
    }  _lineType;
    NSString * _name;
    VKLabelNavJunction * _navJunctionA;
    VKLabelNavRoadLabel * _roadShield;
    VKLabelNavRoadLabel * _roadSign;
    float  _routeCrossProduct;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeOffset;
    NSString * _shieldDisplayGroup;
    NSString * _shieldGroup;
    struct vector<float, geo::StdAllocator<float, mdm::Allocator>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, geo::StdAllocator<float, mdm::Allocator>> { 
            float *__value_; 
            struct StdAllocator<float, mdm::Allocator> { 
                struct Allocator {} *_allocator; 
            } __value_; 
        } __end_cap_; 
    }  _simplifiedPointElevations;
    struct vector<gm::Matrix<double, 2, 1>, geo::StdAllocator<gm::Matrix<double, 2, 1>, mdm::Allocator>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<gm::Matrix<double, 2, 1> *, geo::StdAllocator<gm::Matrix<double, 2, 1>, mdm::Allocator>> { 
            void *__value_; 
            struct StdAllocator<gm::Matrix<double, 2, 1>, mdm::Allocator> { 
                struct Allocator {} *_allocator; 
            } __value_; 
        } __end_cap_; 
    }  _simplifiedPoints;
    bool  _suppressRoadSignIfDeduped;
    bool  _suppressRoadSignIfShieldPresent;
    struct shared_ptr<md::LabelTile> { 
        struct LabelTile {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _tile;
    unsigned long long  _vertexIndexA;
    unsigned long long  _vertexIndexB;
}

@property (nonatomic) bool areLabelsDisabled;
@property (nonatomic, readonly) const char *cstrName;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  direction2D; /* unknown property attribute:  1>=[2f]} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  direction3D; /* unknown property attribute:  1>=[3f]} */
@property (nonatomic) long long intraRoadPriorityForRoadLabel;
@property (nonatomic) long long intraRoadPriorityForShieldLabel;
@property (nonatomic, readonly) bool isAwayFromRoute;
@property (nonatomic, readonly) bool isEtaFeature;
@property (nonatomic) bool isGuidanceStepStart;
@property (nonatomic) bool isInGuidance;
@property (nonatomic) bool isOnRoute;
@property (nonatomic, readonly) bool isOnewayToJunction;
@property (nonatomic) bool isPicked;
@property (nonatomic, readonly) bool isRamp;
@property (nonatomic) bool isRoadLabelUnique;
@property (nonatomic) bool isStartOfRoadName;
@property (nonatomic, readonly) bool isTrafficCameraFeature;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; }*junctionB;
@property (nonatomic) unsigned long long labelVertexIndexA;
@property (nonatomic) unsigned long long labelVertexIndexB;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) VKLabelNavJunction *navJunctionA;
@property (nonatomic, readonly) int roadClass;
@property (nonatomic, readonly) unsigned char roadSignAlignment;
@property (nonatomic) float routeCrossProduct;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property (nonatomic, readonly) NSString *shieldDisplayGroup;
@property (nonatomic, readonly) NSString *shieldGroup;
@property (nonatomic) bool suppressRoadSignIfDeduped;
@property (nonatomic, readonly) bool suppressRoadSignIfShieldPresent;
@property (nonatomic, readonly) const void*tile;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_findLabelAnchorPoint:(void*)arg1 isShieldLabel:(bool)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 roadGraph:(id)arg6;
- (float)_findRoadOffsetForDistanceToRay:(float)arg1 rayStart:(struct Matrix<double, 3, 1> { double x1[3]; })arg2 rayVector:(struct Matrix<float, 2, 1> { float x1[2]; })arg3 roadGraph:(id)arg4;
- (id)_newLabelWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1 isShieldLabel:(bool)arg2 worldPoint:(struct Mercator3<double> { double x1[3]; })arg3 alignment:(unsigned char)arg4 artworkCache:(void*)arg5;
- (void)_updateWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1;
- (void)_updateWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1 threshold:(double)arg2;
- (bool)_worldPointForRoadOffset:(float)arg1 worldPoint:(void*)arg2;
- (void)_worldRoadPoints:(void*)arg1 elevations:(void*)arg2;
- (void)appendSimplifiedWorldRoadPoints:(void*)arg1 pointElevations:(void*)arg2;
- (bool)areLabelsDisabled;
- (void)clearRoadShield;
- (void)clearRoadSign;
- (void)createLabelWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1 isShieldLabel:(bool)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 minRouteDistance:(float)arg6 roadGraph:(id)arg7 artworkCache:(void*)arg8;
- (const char *)cstrName;
- (void)dealloc;
- (id)description;
- (struct Matrix<float, 2, 1> { float x1[2]; })direction2D;
- (struct Matrix<float, 3, 1> { float x1[3]; })direction3D;
- (void)getRoadEdge:(struct GeoCodecsRoadEdge { struct GeoCodecsMultiSectionFeature {} *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct GeoCodecsConnectivityJunction {} *x6; struct GeoCodecsConnectivityJunction {} *x7; }*)arg1;
- (bool)hasShield;
- (bool)hasVisibleShields;
- (bool)hasVisibleSigns;
- (id)initWithRoadEdge:(const struct GeoCodecsRoadEdge { struct GeoCodecsMultiSectionFeature {} *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct GeoCodecsConnectivityJunction {} *x6; struct GeoCodecsConnectivityJunction {} *x7; }*)arg1 navJunctionA:(id)arg2 routeOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3 tile:(const void*)arg4;
- (long long)intraRoadPriorityForRoadLabel;
- (long long)intraRoadPriorityForShieldLabel;
- (bool)isAwayFromRoute;
- (bool)isEtaFeature;
- (bool)isGuidanceStepStart;
- (bool)isInGuidance;
- (bool)isOnRoute;
- (bool)isOnewayToJunction;
- (bool)isPicked;
- (bool)isRamp;
- (bool)isRoadLabelUnique;
- (bool)isStartOfRoadName;
- (bool)isTrafficCameraFeature;
- (bool)isValid;
- (struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; }*)junctionB;
- (unsigned long long)labelVertexIndexA;
- (unsigned long long)labelVertexIndexB;
- (id)labelWithType:(bool)arg1;
- (void)layoutWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1;
- (double)length;
- (bool)matchesRoad:(id)arg1;
- (bool)matchesRoadEdge:(const struct GeoCodecsRoadEdge { struct GeoCodecsMultiSectionFeature {} *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct GeoCodecsConnectivityJunction {} *x6; struct GeoCodecsConnectivityJunction {} *x7; }*)arg1;
- (id)name;
- (id)navJunctionA;
- (void)prepareStyleVarsWithContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1;
- (void)recreateRoadShieldWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1 artworkCache:(void*)arg2;
- (void)recreateRoadSignWithAlignment:(unsigned char)arg1 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg2 artworkCache:(void*)arg3;
- (int)roadClass;
- (bool)roadHasName;
- (unsigned char)roadSignAlignment;
- (float)routeCrossProduct;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (void)setAreLabelsDisabled:(bool)arg1;
- (void)setIntraRoadPriorityForRoadLabel:(long long)arg1;
- (void)setIntraRoadPriorityForShieldLabel:(long long)arg1;
- (void)setIsGuidanceStepStart:(bool)arg1;
- (void)setIsInGuidance:(bool)arg1;
- (void)setIsOnRoute:(bool)arg1;
- (void)setIsPicked:(bool)arg1;
- (void)setIsRoadLabelUnique:(bool)arg1;
- (void)setIsStartOfRoadName:(bool)arg1;
- (void)setLabelVertexIndexA:(unsigned long long)arg1;
- (void)setLabelVertexIndexB:(unsigned long long)arg1;
- (void)setRouteCrossProduct:(float)arg1;
- (void)setRouteOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setSuppressRoadSignIfDeduped:(bool)arg1;
- (id)shieldDisplayGroup;
- (id)shieldGroup;
- (bool)suppressRoadSignIfDeduped;
- (bool)suppressRoadSignIfShieldPresent;
- (const void*)tile;

@end
