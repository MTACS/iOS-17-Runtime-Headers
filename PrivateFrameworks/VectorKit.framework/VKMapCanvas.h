
@interface VKMapCanvas : VKScreenCanvas <VKInteractiveMap> {
    double  _canonicalSkyHeight;
    float  _consoleFps;
    int  _consoleFpsUpdateTicker;
    <VKInteractiveMapDelegate> * _delegate;
    VKTimedAnimation * _horizontalOffsetAnimation;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastCanvasSize;
    struct optional<float> { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[4]; 
            float type; 
        } _value; 
    }  _lastValidCanvasSizeZoomLevel;
    struct shared_ptr<md::OverlayContainer> { 
        struct OverlayContainer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _overlayContainer;
    VKPuckAnimator * _puckAnimator;
    bool  _trafficEnabled;
}

@property (nonatomic) double canonicalSkyHeight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VKInteractiveMapDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *overlays;
@property (nonatomic) VKPuckAnimator *puckAnimator;
@property (readonly) Class superclass;
@property (nonatomic) bool trafficEnabled;
@property (nonatomic, readonly) NSArray *visibleTileSets;

+ (bool)supportsMapType:(int)arg1 scale:(int)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_isGlobeEnabled;
- (struct optional<float> { bool x1; union ValueUnion { unsigned char x_2_1_1[4]; float x_2_1_2; } x2; })_zoomLevelForCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (void)addOverlay:(id)arg1;
- (id /* block */)annotationCoordinateTest;
- (id /* block */)annotationRectTest;
- (id)attributionsForCurrentRegion;
- (double)canonicalSkyHeight;
- (void)clearScene;
- (id)consoleString:(bool)arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinateToCameraModelPoint:(struct { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinateToPoint:(struct { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertMapPointToPoint:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToCoordinate:(struct CGPoint { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToMapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (void)debugHighlightObjectAtPoint:(struct CGPoint { double x1; double x2; })arg1 highlightTarget:(unsigned char)arg2;
- (id)delegate;
- (id)detailedDescription;
- (void)didBecomeActive;
- (void)didBecomeInActive;
- (id /* block */)globeAnnotationCoordinateTest;
- (id /* block */)globeAnnotationRectTest;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (id)initWithMapEngine:(void*)arg1 inBackground:(bool)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (bool)isPointValidForGesturing:(struct CGPoint { double x1; double x2; })arg1;
- (id)markerAtScreenPoint:(struct CGPoint { double x1; double x2; })arg1 enableExtendedFeatureMarkers:(bool)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overlays;
- (void)populateDebugNode:(void*)arg1 withOptions:(const void*)arg2;
- (id)puckAnimator;
- (void)removeOverlay:(id)arg1;
- (void)setCameraHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3;
- (void)setCanonicalSkyHeight:(double)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)setMapType:(int)arg1 animated:(bool)arg2;
- (void)setPuckAnimator:(id)arg1;
- (void)setTrafficEnabled:(bool)arg1;
- (bool)shouldHideOffscreenSelectedAnnotation;
- (long long)tileSize;
- (bool)trafficEnabled;
- (void)transferStateFromCanvas:(id)arg1;
- (void)transitionToTracking:(bool)arg1 mapMode:(long long)arg2 startLocation:(struct { double x1; double x2; })arg3 startCourse:(double)arg4 cameraController:(id)arg5 pounceCompletionHandler:(id /* block */)arg6;
- (void)updateCameraForFrameResize;
- (void)updateOverlays;
- (void)updateWithTimestamp:(double)arg1 withContext:(void*)arg2;
- (id)visibleTileSets;

@end
