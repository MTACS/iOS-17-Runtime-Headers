
@interface MKPlaceInlineMapViewController : UIViewController <MKModuleViewControllerProtocol> {
    bool  _bottomHairlineHidden;
    MKAnnotatedMapSnapshotter * _collectionSnapshotter;
    MKPlaceInlineMapViewControllerConfiguration * _configuration;
    _MKPlaceInlineMapContentView * _contentView;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentSize;
    <MKPlaceInlineMapViewControllerDelegate> * _delegate;
    MKMapCamera * _mapCamera;
    MKMapItem * _mapItem;
    MKMapItem * _updatingInlineMapItem;
}

@property (getter=isBottomHairlineHidden, nonatomic) bool bottomHairlineHidden;
@property (nonatomic, retain) MKPlaceInlineMapViewControllerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPlaceInlineMapViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapCamera *mapCamera;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *visibleMapItems;

+ (id)inlineMapWithMapItem:(id)arg1 configuration:(id)arg2;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_handleTapOnMap;
- (void)_launchMaps;
- (struct CGSize { double x1; double x2; })_mapSize;
- (void)_updateInlineMapWithRefinedMapItems;
- (void)_updateMap;
- (void)_updateMapIfNeeded;
- (void)_updateSnapshotImage:(id)arg1;
- (void)cancelSnapshotRequestIfNeeded;
- (id)configuration;
- (id)delegate;
- (id)initWithMKMapItem:(id)arg1 configuration:(id)arg2;
- (bool)isBottomHairlineHidden;
- (void)loadView;
- (id)mapCamera;
- (id)mapItem;
- (long long)preferredUserInterfaceStyle;
- (void)setBottomHairlineHidden:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMapCamera:(id)arg1;
- (void)setMapItem:(id)arg1;
- (id)snapshot;
- (id)traitCollectionForSnapshot;
- (void)updateInlineMapWithRefinedMapItems;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)visibleMapItems;

@end
