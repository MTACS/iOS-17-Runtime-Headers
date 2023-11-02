
@protocol VKInteractiveMap <NSObject>

@required

+ (bool)supportsMapType:(int)arg1 scale:(int)arg2;

- (void)addOverlay:(VKOverlay *)arg1;
- (id /* block */)annotationCoordinateTest:(void *)arg1; // needs 1 arg types, found 5: id /* block */, struct { double x1; double x2; }, void*, id, SEL
- (id /* block */)annotationRectTest:(void *)arg1; // needs 1 arg types, found 8: id /* block */, double, double, double, double, void*, id, SEL
- (NSArray *)attributionsForCurrentRegion;
- (NSString *)consoleString:(bool)arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinateToCameraModelPoint:(struct { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinateToPoint:(struct { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertMapPointToPoint:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToCoordinate:(struct CGPoint { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToMapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)debugHighlightObjectAtPoint:(struct CGPoint { double x1; double x2; })arg1 highlightTarget:(unsigned char)arg2;
- (<VKInteractiveMapDelegate> *)delegate;
- (NSString *)detailedDescription;
- (void)insertOverlay:(VKOverlay *)arg1 aboveOverlay:(VKOverlay *)arg2;
- (void)insertOverlay:(VKOverlay *)arg1 belowOverlay:(VKOverlay *)arg2;
- (bool)isPointValidForGesturing:(struct CGPoint { double x1; double x2; })arg1;
- (NSArray *)overlays;
- (void)removeOverlay:(VKOverlay *)arg1;
- (void)setDelegate:(id <VKInteractiveMapDelegate>)arg1;
- (void)setMapType:(int)arg1 animated:(bool)arg2;
- (bool)shouldHideOffscreenSelectedAnnotation;
- (void)transitionToTracking:(void *)arg1 mapMode:(void *)arg2 startLocation:(void *)arg3 startCourse:(void *)arg4 cameraController:(void *)arg5 pounceCompletionHandler:(void *)arg6; // needs 6 arg types, found 11: bool, long long, struct { double x1; double x2; }, double, VKCameraController<VKNavigationCameraController> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NSArray *)visibleTileSets;

@end
