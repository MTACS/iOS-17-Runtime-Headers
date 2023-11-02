
@interface PXPlacesMapView : MKMapView <MKMapViewDelegate> {
    double  _currentScale;
    <PXPlacesMapViewDelegate> * _mapViewDelegate;
    id /* block */  _px_canEnter3DModeDidChangeHandler;
    id /* block */  _px_isPitchedDidChangeHandler;
    id /* block */  _px_mapViewDidFinishLoadingHandler;
    id /* block */  _px_mapViewDidStartLocatingUserHandler;
    id /* block */  _px_preferredConfigurationDidChangeHandler;
    id /* block */  _px_regionDidChangeHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXPlacesMapViewDelegate> *mapViewDelegate;
@property (nonatomic) long long panningGestureMinimumNumberOfTouches;
@property (nonatomic) double pitch;
@property (nonatomic, copy) id /* block */ px_canEnter3DModeDidChangeHandler;
@property (nonatomic, readonly) bool px_isPitched;
@property (nonatomic, copy) id /* block */ px_isPitchedDidChangeHandler;
@property (nonatomic, copy) id /* block */ px_mapViewDidFinishLoadingHandler;
@property (nonatomic, copy) id /* block */ px_mapViewDidStartLocatingUserHandler;
@property (nonatomic, copy) id /* block */ px_preferredConfigurationDidChangeHandler;
@property (nonatomic, copy) id /* block */ px_regionDidChangeHandler;
@property (readonly) Class superclass;

+ (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })MKMapRectForCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })canonicalMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectForNearbyQueriesFromRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 atScale:(double)arg2 targetViewSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)mapViewWithMarkedLocation:(id)arg1 regionRadius:(double)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

- (void).cxx_destruct;
- (void)_commonInit;
- (double)_px_zoomLevel;
- (double)_radiansFromDegrees:(double)arg1;
- (double)_sampleMapDistanceFromViewPoint:(struct CGPoint { double x1; double x2; })arg1 toViewPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)awakeFromNib;
- (id)currentViewPort;
- (id)currentViewPortWithThumbnailOverscan;
- (void)deselectAllAnnotationsAnimated:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)mapView:(id)arg1 canEnter3DModeDidChange:(bool)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 didBecomePitched:(bool)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(bool)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapViewDelegate;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(bool)arg2;
- (void)mapViewWillStartLocatingUser:(id)arg1;
- (long long)panningGestureMinimumNumberOfTouches;
- (double)pitch;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })ppt_cityMapRect;
- (void)ppt_performPlacesScrollTest:(id)arg1 iterations:(long long)arg2 screenDelta:(long long)arg3 delay:(double)arg4 completion:(id /* block */)arg5;
- (void)ppt_performPlacesZoomTest:(id)arg1 iterations:(long long)arg2 delay:(double)arg3 completion:(id /* block */)arg4;
- (id /* block */)ppt_visibleMapRectBlockForQueue:(id)arg1 delay:(double)arg2;
- (id /* block */)px_canEnter3DModeDidChangeHandler;
- (bool)px_isPitched;
- (id /* block */)px_isPitchedDidChangeHandler;
- (id /* block */)px_mapViewDidFinishLoadingHandler;
- (id /* block */)px_mapViewDidStartLocatingUserHandler;
- (id /* block */)px_preferredConfigurationDidChangeHandler;
- (id /* block */)px_regionDidChangeHandler;
- (void)setDelegate:(id)arg1;
- (void)setMapViewDelegate:(id)arg1;
- (void)setPanningGestureMinimumNumberOfTouches:(long long)arg1;
- (void)setPitch:(double)arg1;
- (void)setPreferredConfiguration:(id)arg1;
- (void)setPx_canEnter3DModeDidChangeHandler:(id /* block */)arg1;
- (void)setPx_isPitchedDidChangeHandler:(id /* block */)arg1;
- (void)setPx_mapViewDidFinishLoadingHandler:(id /* block */)arg1;
- (void)setPx_mapViewDidStartLocatingUserHandler:(id /* block */)arg1;
- (void)setPx_preferredConfigurationDidChangeHandler:(id /* block */)arg1;
- (void)setPx_regionDidChangeHandler:(id /* block */)arg1;

@end
