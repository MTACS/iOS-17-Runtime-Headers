
@interface MKPlacePoisInlineMapViewController : MKPlaceInlineMapViewController <MKStackingViewControllerFixedHeightAware> {
    NSArray * _fetchedMapItems;
    CLLocation * _location;
    _MKPlacePoisInlineMapContentView * _mapContentView;
    bool  _resizableViewsDisabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) bool resizableViewsDisabled;
@property (readonly) Class superclass;

+ (id)inlineMapWithMapItem:(id)arg1 configuration:(id)arg2;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_handleTapOnMap;
- (void)_updateMap;
- (void)fetchPoisForBrand;
- (id)geoCamera;
- (void)loadView;
- (id)location;
- (long long)preferredUserInterfaceStyle;
- (bool)resizableViewsDisabled;
- (void)setLocation:(id)arg1;
- (void)setResizableViewsDisabled:(bool)arg1;
- (void)viewDidLoad;
- (id)visibleMapItems;

@end
