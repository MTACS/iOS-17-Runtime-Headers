
@interface MKMapSnapshot : NSObject {
    NSArray * _allImages;
    NSArray * _allTraitCollections;
    UIImage * _image;
    VKMapSnapshot * _snapshot;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

+ (id)createSnapshotWithOptions:(id)arg1 timeoutInSeconds:(long long)arg2;

- (void).cxx_destruct;
- (void)_compositeOnImages:(id /* block */)arg1 drawQueue:(id)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (struct CLLocationCoordinate2D { double x1; double x2; })_coordinateForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_displayAppleLogoForMapType:(unsigned long long)arg1 callbackQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_hasNoDataPlaceholders;
- (id)_initWithSnapshot:(id)arg1 traitCollection:(id)arg2;
- (void)_prepareForRenderWithAnnotationViews:(id)arg1 workQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_statsMemoryUsage;
- (id)image;
- (struct CGPoint { double x1; double x2; })pointForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)snapshotWithAnnotationView:(id)arg1 atCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (id)snapshotWithAnnotationView:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)traitCollection;

@end
