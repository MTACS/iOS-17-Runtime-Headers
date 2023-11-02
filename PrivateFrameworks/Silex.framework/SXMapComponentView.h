
@interface SXMapComponentView : SXMediaComponentView <MKMapViewDelegate, SXFullscreenCanvasViewControllerDelegate, UIGestureRecognizerDelegate> {
    SXMediaEngageEvent * _activeMediaEngageEvent;
    NSArray * _annotations;
    NSCache * _cachedSnapshots;
    <SXDocumentTitleProviding> * _documentTitleProvider;
    UIBarButtonItem * _doneBarButtonItem;
    SXFullscreenCanvasViewController * _fullScreenCanvasViewController;
    UIImageView * _imageView;
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
    MKMapView * _mapView;
    UISegmentedControl * _segmentedControl;
    id /* block */  _snapShotCancelHandler;
    SXMapSnapShotter * _snapShotter;
    UITapGestureRecognizer * _tapGesture;
    NSArray * _toolbarItems;
}

@property (nonatomic, retain) SXMediaEngageEvent *activeMediaEngageEvent;
@property (nonatomic, retain) NSArray *annotations;
@property (nonatomic, readonly) NSCache *cachedSnapshots;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentTitleProviding> *documentTitleProvider;
@property (nonatomic, retain) UIBarButtonItem *doneBarButtonItem;
@property (nonatomic, retain) SXFullscreenCanvasViewController *fullScreenCanvasViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } mapRect;
@property (nonatomic, retain) MKMapView *mapView;
@property (nonatomic, retain) UISegmentedControl *segmentedControl;
@property (nonatomic, copy) id /* block */ snapShotCancelHandler;
@property (nonatomic, readonly) SXMapSnapShotter *snapShotter;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGesture;
@property (nonatomic, retain) NSArray *toolbarItems;

- (void).cxx_destruct;
- (id)activeMediaEngageEvent;
- (unsigned long long)analyticsMediaType;
- (id)annotations;
- (bool)areBarsHidden;
- (id)cachedSnapshots;
- (void)cancelSnapShot;
- (void)configureMapView;
- (void)createMediaEngageEvent;
- (void)createSnapShot;
- (void)dealloc;
- (void)discardContents;
- (void)dismissFullScreen;
- (id)documentTitleProvider;
- (id)doneBarButtonItem;
- (void)enableMapViewInteraction:(bool)arg1;
- (void)finishMediaEngageEvent;
- (id)fullScreenCanvasViewController;
- (void)fullScreenCanvasViewControllerWantsToDismiss:(id)arg1;
- (void)handleDoneTap:(id)arg1;
- (void)handleTap:(id)arg1;
- (bool)hasSelectedAnnotations;
- (id)imageView;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 documentTitleProvider:(id)arg7;
- (bool)isPresentingFullscreen;
- (bool)isUserInteractingWithMap;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRect;
- (id)mapTitle;
- (void)mapTypeChanged:(id)arg1;
- (unsigned long long)mapTypeForSegmentIndex:(unsigned long long)arg1;
- (id)mapView;
- (void)memoryWarning:(id)arg1;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; bool x3; })arg1;
- (void)presentFullScreen;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (void)renderContents;
- (unsigned long long)segmentIndexForMapType:(unsigned long long)arg1;
- (id)segmentedControl;
- (void)setActiveMediaEngageEvent:(id)arg1;
- (void)setAnnotations:(id)arg1;
- (void)setDoneBarButtonItem:(id)arg1;
- (void)setFullScreenCanvasViewController:(id)arg1;
- (void)setMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMapView:(id)arg1;
- (void)setSegmentedControl:(id)arg1;
- (void)setSnapShotCancelHandler:(id /* block */)arg1;
- (void)setTapGesture:(id)arg1;
- (void)setToolbarItems:(id)arg1;
- (void)setupNavigationBar;
- (void)setupToolbar;
- (id /* block */)snapShotCancelHandler;
- (id)snapShotter;
- (void)submitEvents;
- (void)submitMediaEngageCompleteEvent;
- (id)tapGesture;
- (id)toolbarItems;
- (void)traitCollectionDidChange:(id)arg1;

@end
