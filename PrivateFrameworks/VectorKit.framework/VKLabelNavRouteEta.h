
@interface VKLabelNavRouteEta : NSObject <VKLabelNavFeature> {
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _coordinate;
    bool  _didStyleChange;
    VKRouteEtaDescription * _displayEtaDescription;
    VKLabelNavRoadLabel * _etaLabel;
    unsigned long long  _etaLabelArtworkKey;
    bool  _isAwayFromRoute;
    bool  _isOnRoute;
    bool  _isPicked;
    bool  _isRepositioning;
    unsigned char  _orientation;
    VKRouteInfo * _routeInfo;
    struct optional<gss::RouteLegWhen> { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[1]; 
            unsigned char type; 
        } _value; 
    }  _routeLegWhen;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeOffset;
    bool  _selected;
    struct optional<gss::When> { 
        union { 
            BOOL __null_state_; 
            unsigned char __val_; 
        } ; 
        bool __engaged_; 
    }  _when;
    double  _worldUnitsPerMeterAtPoint;
}

@property (nonatomic) bool didStyleChange;
@property (nonatomic, readonly) VKRouteEtaDescription *displayEtaDescription;
@property (nonatomic, readonly) unsigned char etaComparisonToMain;
@property (nonatomic, readonly) long long intraRoadPriorityForRoadLabel;
@property (nonatomic, readonly) long long intraRoadPriorityForShieldLabel;
@property (nonatomic, readonly) bool isAwayFromRoute;
@property (nonatomic, readonly) bool isEtaFeature;
@property (nonatomic, readonly) bool isGuidanceStepStart;
@property (nonatomic, readonly) bool isInGuidance;
@property (nonatomic, readonly) bool isOnRoute;
@property (nonatomic) bool isPicked;
@property (nonatomic, readonly) bool isRamp;
@property (nonatomic) bool isRepositioning;
@property (nonatomic, readonly) bool isStartOfRoadName;
@property (nonatomic, readonly) bool isTrafficCameraFeature;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) VKLabelNavRoadLabel *label;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) unsigned char orientation;
@property (nonatomic, retain) VKRouteInfo *routeInfo;
@property (nonatomic) struct optional<gss::RouteLegWhen> { bool x1; union ValueUnion { unsigned char x_2_1_1[1]; unsigned char x_2_1_2; } x2; } routeLegWhen;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property (nonatomic) bool selected;
@property (nonatomic, readonly) NSString *shieldDisplayGroup;
@property (nonatomic) struct optional<gss::When> { union { BOOL x_1_1_1; unsigned char x_1_1_2; } x1; bool x2; } when;
@property (nonatomic, readonly) double worldUnitsPerMeterAtPoint;

+ (id)artworkForEtaDescription:(id)arg1 navContext:(const struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg2 roadSignStyleGroup:(const void*)arg3 mercatorPoint:(const void*)arg4 orientation:(unsigned char)arg5 isSelected:(bool)arg6 artworkCache:(void*)arg7;
+ (struct vector<GeoCodecsFeatureStylePair, geo::StdAllocator<GeoCodecsFeatureStylePair, mdm::Allocator>> { struct GeoCodecsFeatureStylePair {} *x1; struct GeoCodecsFeatureStylePair {} *x2; struct __compressed_pair<GeoCodecsFeatureStylePair *, geo::StdAllocator<GeoCodecsFeatureStylePair, mdm::Allocator>> { struct GeoCodecsFeatureStylePair {} *x_3_1_1; struct StdAllocator<GeoCodecsFeatureStylePair, mdm::Allocator> { struct Allocator {} *x_2_2_1; } x_3_1_2; } x3; })baseAttributesForEtaLabel:(bool)arg1 focused:(bool)arg2 etaComparison:(unsigned char)arg3 transportType:(unsigned char)arg4 navLabelType:(unsigned char)arg5 when:(struct optional<gss::When> { union { BOOL x_1_1_1; unsigned char x_1_1_2; } x1; bool x2; })arg6 routeLegWhen:(struct optional<gss::RouteLegWhen> { bool x1; union ValueUnion { unsigned char x_2_1_1[1]; unsigned char x_2_1_2; } x2; })arg7 additionalAttributes:(id)arg8;
+ (struct RoadSignStyleGroup { struct shared_ptr<gss::StylesheetQuery<gss::PropertyID>> { void *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct shared_ptr<gss::StylesheetQuery<gss::PropertyID>> { void *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct shared_ptr<gss::StylesheetQuery<gss::PropertyID>> { void *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; })styleForNavContext:(const struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1 selected:(bool)arg2 focused:(bool)arg3 etaComparison:(unsigned char)arg4 transportType:(unsigned char)arg5 navLabelType:(unsigned char)arg6 when:(struct optional<gss::When> { union { BOOL x_1_1_1; unsigned char x_1_1_2; } x1; bool x2; })arg7 routeLegWhen:(struct optional<gss::RouteLegWhen> { bool x1; union ValueUnion { unsigned char x_2_1_1[1]; unsigned char x_2_1_2; } x2; })arg8 additionalAttributes:(id)arg9;
+ (unsigned char)toStyleEtaComparison:(unsigned char)arg1;
+ (unsigned char)toStyleNavLabelType:(long long)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearLabel;
- (void)createLabelWithNavContext:(const struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1 orientation:(unsigned char)arg2 etaDescription:(id)arg3 selected:(bool)arg4 when:(struct optional<gss::When> { union { BOOL x_1_1_1; unsigned char x_1_1_2; } x1; bool x2; })arg5 routeLegWhen:(struct optional<gss::RouteLegWhen> { bool x1; union ValueUnion { unsigned char x_2_1_1[1]; unsigned char x_2_1_2; } x2; })arg6 artworkCache:(void*)arg7;
- (void)dealloc;
- (bool)didStyleChange;
- (id)displayEtaDescription;
- (unsigned char)etaComparisonToMain;
- (bool)hasAnchor;
- (bool)hasLabel;
- (bool)hasLabelWithAnchor;
- (id)initWithRouteInfo:(id)arg1 routeCoord:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (long long)intraRoadPriorityForRoadLabel;
- (long long)intraRoadPriorityForShieldLabel;
- (bool)isAwayFromRoute;
- (bool)isEtaFeature;
- (bool)isGuidanceStepStart;
- (bool)isInGuidance;
- (bool)isOnRoute;
- (bool)isPicked;
- (bool)isRamp;
- (bool)isRepositioning;
- (bool)isStartOfRoadName;
- (bool)isTrafficCameraFeature;
- (bool)isValid;
- (id)label;
- (void)layoutWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1;
- (id)name;
- (unsigned char)orientation;
- (void)prepareStyleVarsWithContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1;
- (void)repositionAtRouteCoord:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (id)routeInfo;
- (struct optional<gss::RouteLegWhen> { bool x1; union ValueUnion { unsigned char x_2_1_1[1]; unsigned char x_2_1_2; } x2; })routeLegWhen;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (bool)selected;
- (void)setDidStyleChange:(bool)arg1;
- (void)setIsPicked:(bool)arg1;
- (void)setIsRepositioning:(bool)arg1;
- (void)setOrientation:(unsigned char)arg1;
- (void)setRouteInfo:(id)arg1;
- (void)setRouteLegWhen:(struct optional<gss::RouteLegWhen> { bool x1; union ValueUnion { unsigned char x_2_1_1[1]; unsigned char x_2_1_2; } x2; })arg1;
- (void)setSelected:(bool)arg1;
- (void)setWhen:(struct optional<gss::When> { union { BOOL x_1_1_1; unsigned char x_1_1_2; } x1; bool x2; })arg1;
- (id)shieldDisplayGroup;
- (void)updateAnchorWithContext:(const struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1;
- (struct _retain_ptr<VKLabelNavRoadLabel *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { int (**x1)(); id x2; struct _retain_objc_arc { } x3; struct _release_objc_arc { } x4; })updateRoadSignWithNavContext:(const struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1 artworkCache:(void*)arg2;
- (struct optional<gss::When> { union { BOOL x_1_1_1; unsigned char x_1_1_2; } x1; bool x2; })when;
- (struct Matrix<double, 3, 1> { double x1[3]; })worldPointForStaging;
- (double)worldUnitsPerMeterAtPoint;

@end
