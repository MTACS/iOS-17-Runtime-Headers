
@interface MSDMapViewController : UIViewController <MKMapViewDelegate> {
    <MSDMapViewControllerDelegate> * _delegate;
    MKMapView * _mapView;
    UIButton * _recenterButton;
    CLLocation * _userLocation;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <MSDMapViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapView *mapView;
@property (nonatomic, retain) UIButton *recenterButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) CLLocation *userLocation;

- (void).cxx_destruct;
- (id)_getAnnotationWithStoreInfo:(id)arg1;
- (void)_recenter:(id)arg1;
- (void)_recenterToCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)_removeAllStoreAnnotations;
- (void)_zoomToAnnotation;
- (void)_zoomToCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 withRadius:(double)arg2 allowZoomOut:(bool)arg3;
- (void)annotateStores:(id)arg1;
- (id)delegate;
- (void)deselectAnnotation;
- (id)initWithDelegate:(id)arg1;
- (id)mapView;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)recenterButton;
- (void)setDelegate:(id)arg1;
- (void)setMapView:(id)arg1;
- (void)setRecenterButton:(id)arg1;
- (void)setUserLocation:(id)arg1;
- (void)stopUpdatingUserLocation;
- (id)userLocation;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)zoomToStore:(id)arg1;

@end
