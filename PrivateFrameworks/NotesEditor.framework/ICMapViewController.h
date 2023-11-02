
@interface ICMapViewController : UIViewController <MKMapViewDelegate> {
    <MKAnnotation> * _annotation;
    MKLocalSearch * _localSearch;
    MKMapItem * _mapItem;
    MKMapView * _mapView;
}

@property (nonatomic, retain) <MKAnnotation> *annotation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKLocalSearch *localSearch;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, retain) MKMapView *mapView;
@property (readonly) Class superclass;

- (bool)_canShowWhileLocked;
- (void)_toolbarItemPressed:(id)arg1;
- (id)annotation;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1;
- (void)loadView;
- (id)localSearch;
- (id)mapItem;
- (id)mapView;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)selectPin;
- (void)setAnnotation:(id)arg1;
- (void)setLocalSearch:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMapView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsFullScreenLayout;

@end
