
@interface MKMapSnapshotOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsSimultaneousLightDarkSnapshots;
    NSArray * _annotationViews;
    GEOApplicationAuditToken * _auditToken;
    MKMapCamera * _camera;
    GEOComposedRoute * _composedRouteForRouteLine;
    NSArray * _customFeatureAnnotations;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _mapRect;
    long long  _mode;
    NSMutableDictionary * _overlayRenderers;
    MKMapConfiguration * _preferredConfiguration;
    struct { 
        struct CLLocationCoordinate2D { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _region;
    bool  _rendersInBackground;
    VKRouteContext * _routeContext;
    <VKRouteOverlay> * _routeOverlay;
    unsigned char  _searchResultsType;
    NSNumber * _selectedTrailID;
    NSString * _selectedTrailLocale;
    NSString * _selectedTrailName;
    bool  _showsAppleLogo;
    bool  _showsBuildings;
    bool  _showsPointLabels;
    bool  _showsRoadLabels;
    bool  _showsRoadShields;
    bool  _showsVenues;
    unsigned long long  _signpostId;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    bool  _snapshotServiceSerialPerProcess;
    UITraitCollection * _traitCollection;
    bool  _useSnapshotService;
    bool  _usingRect;
}

@property (getter=_allowsSimultaneousLightDarkSnapshots, setter=_setAllowsSimultaneousLightDarkSnapshots:, nonatomic) bool allowsSimultaneousLightDarkSnapshots;
@property (nonatomic, copy) NSArray *annotationViews;
@property (getter=_auditToken, setter=_setAuditToken:, nonatomic, retain) GEOApplicationAuditToken *auditToken;
@property (nonatomic, copy) MKMapCamera *camera;
@property (getter=_cartographicConfiguration, setter=_setCartographicConfiguration:, nonatomic) struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; bool x7; } cartographicConfiguration;
@property (getter=_composedRouteForRouteLine, setter=_setComposedRouteForRouteLine:, nonatomic, retain) GEOComposedRoute *composedRouteForRouteLine;
@property (getter=_customFeatureAnnotations, setter=_setCustomFeatureAnnotations:, nonatomic, copy) NSArray *customFeatureAnnotations;
@property (getter=_edgeInsets, setter=_setEdgeInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } mapRect;
@property (nonatomic) unsigned long long mapType;
@property (nonatomic, copy) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic, copy) MKMapConfiguration *preferredConfiguration;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;
@property (getter=_rendersInBackground, setter=_setRendersInBackground:, nonatomic) bool rendersInBackground;
@property (getter=_routeContext, setter=_setRouteContext:, nonatomic, retain) VKRouteContext *routeContext;
@property (getter=_routeOverlay, setter=_setRouteOverlay:, nonatomic, retain) <VKRouteOverlay> *routeOverlay;
@property (nonatomic) double scale;
@property (getter=_searchResultsType, setter=_setSearchResultsType:, nonatomic) unsigned char searchResultsType;
@property (getter=_selectedTrailID, nonatomic, readonly) NSNumber *selectedTrailID;
@property (getter=_selectedTrailLocale, nonatomic, readonly, copy) NSString *selectedTrailLocale;
@property (getter=_selectedTrailName, nonatomic, readonly, copy) NSString *selectedTrailName;
@property (getter=_showsAppleLogo, setter=_setShowsAppleLogo:, nonatomic) bool showsAppleLogo;
@property (nonatomic) bool showsBuildings;
@property (getter=_showsNightMode, setter=_setShowsNightMode:, nonatomic) bool showsNightMode;
@property (getter=_showsPointLabels, setter=_setShowsPointLabels:, nonatomic) bool showsPointLabels;
@property (nonatomic) bool showsPointsOfInterest;
@property (getter=_showsRoadLabels, setter=_setShowsRoadLabels:, nonatomic) bool showsRoadLabels;
@property (getter=_showsRoadShields, setter=_setShowsRoadShields:, nonatomic) bool showsRoadShields;
@property (getter=_showsVenues, setter=_setShowsVenues:, nonatomic) bool showsVenues;
@property (nonatomic) unsigned long long signpostId;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (getter=_snapshotServiceSerialPerProcess, setter=_setSnapshotServiceSerialPerProcess:, nonatomic) bool snapshotServiceSerialPerProcess;
@property (nonatomic, copy) UITraitCollection *traitCollection;
@property (getter=_useSnapshotService, setter=_setUseSnapshotService:, nonatomic) bool useSnapshotService;
@property (nonatomic, readonly) bool usingRect;
@property (getter=_viewportMode, nonatomic, readonly) long long viewportMode;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_allOverlayRenderers;
- (id)_allOverlays;
- (bool)_allowsSimultaneousLightDarkSnapshots;
- (id)_auditToken;
- (struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; bool x7; })_cartographicConfiguration;
- (id)_composedRouteForRouteLine;
- (id)_customFeatureAnnotations;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsets;
- (id)_encodableOverlayRenderers;
- (id)_overlayRenderersForOverlayLevel:(long long)arg1;
- (bool)_overlaysRequireModernMap;
- (bool)_overlaysSupportElevation;
- (void)_prepareToSubmit;
- (bool)_rendersInBackground;
- (struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; bool x7; })_resolvedCartographicConfigurationWithAuditToken:(id)arg1;
- (id)_routeContext;
- (id)_routeOverlay;
- (unsigned char)_searchResultsType;
- (id)_selectedTrailID;
- (id)_selectedTrailLocale;
- (id)_selectedTrailName;
- (void)_setAllowsSimultaneousLightDarkSnapshots:(bool)arg1;
- (void)_setAuditToken:(id)arg1;
- (void)_setCartographicConfiguration:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; bool x7; })arg1;
- (void)_setComposedRouteForRouteLine:(id)arg1;
- (void)_setCustomFeatureAnnotations:(id)arg1;
- (void)_setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setOverlayRenderers:(id)arg1 forOverlayLevel:(long long)arg2;
- (void)_setRendersInBackground:(bool)arg1;
- (void)_setRouteContext:(id)arg1;
- (void)_setRouteOverlay:(id)arg1;
- (void)_setSearchResultsType:(unsigned char)arg1;
- (void)_setSelectedTrailWithId:(id)arg1 name:(id)arg2 locale:(id)arg3;
- (void)_setShowsAppleLogo:(bool)arg1;
- (void)_setShowsNightMode:(bool)arg1;
- (void)_setShowsPointLabels:(bool)arg1;
- (void)_setShowsRoadLabels:(bool)arg1;
- (void)_setShowsRoadShields:(bool)arg1;
- (void)_setShowsVenues:(bool)arg1;
- (void)_setSnapshotServiceSerialPerProcess:(bool)arg1;
- (void)_setUseSnapshotService:(bool)arg1;
- (bool)_showsAppleLogo;
- (bool)_showsNightMode;
- (bool)_showsPointLabels;
- (bool)_showsPointsOfInterest;
- (bool)_showsRoadLabels;
- (bool)_showsRoadShields;
- (bool)_showsVenues;
- (bool)_snapshotServiceSerialPerProcess;
- (bool)_useSnapshotService;
- (long long)_viewportMode;
- (id)annotationViews;
- (id)camera;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRect;
- (unsigned long long)mapType;
- (id)pointOfInterestFilter;
- (id)preferredConfiguration;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (double)scale;
- (void)setAnnotationViews:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMapType:(unsigned long long)arg1;
- (void)setPointOfInterestFilter:(id)arg1;
- (void)setPreferredConfiguration:(id)arg1;
- (void)setRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScale:(double)arg1;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsPointsOfInterest:(bool)arg1;
- (void)setSignpostId:(unsigned long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTraitCollection:(id)arg1;
- (bool)showsBuildings;
- (bool)showsPointsOfInterest;
- (unsigned long long)signpostId;
- (struct CGSize { double x1; double x2; })size;
- (id)traitCollection;
- (bool)usingRect;

// Image: /System/Library/PrivateFrameworks/WeatherMaps.framework/WeatherMaps

- (void)configureForWeather;

@end
