
@interface MKMapItemView : UIView <MKInfoCardThemeListener> {
    MKMapCamera * _camera;
    struct { 
        double latitudeDelta; 
        double longitudeDelta; 
    }  _coordinateSpan;
    bool  _hideLookAroundView;
    bool  _loadCalledOnce;
    NSTimer * _loadTimeoutTimer;
    bool  _loadingLookAroundView;
    NSMutableArray * _lookAroundConstraints;
    MKLookAroundContainerView * _lookAroundContainerView;
    MKMapItem * _mapItem;
    id /* block */  _mapItemloadedCompletionHandler;
    bool  _shouldResolveMapItem;
    bool  _shouldShowBorders;
    unsigned long long  _signpostID;
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeWhenLastLoaded;
    NSMutableArray * _snapshotConstraints;
    NSError * _snapshotError;
    MKMapSnapshotView * _snapshotView;
    NSLayoutConstraint * _snapshotWidthConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideLookAroundView;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic) bool shouldResolveMapItem;
@property (nonatomic) bool shouldShowBorders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_annotationView;
- (bool)_areBoundsValid;
- (void)_callCompletionHandler;
- (void)_callCompletionHandlerWithInvalidBoundsError;
- (void)_callCompletionHandlerWithInvalidCoordinateSpanError;
- (struct { double x1; double x2; })_clampCoordinateSpan:(struct { double x1; double x2; })arg1;
- (id)_customAnnotation;
- (id)_deriveSnapshotOptions:(bool)arg1;
- (void)_fetchLookAroundViewforMapItem:(id)arg1;
- (void)_getParentItem;
- (void)_handleTapOnLookAroundView:(id)arg1;
- (void)_handleTapOnSnapshot:(id)arg1;
- (void)_loadMapItem:(id)arg1 camera:(id)arg2 coordinateSpan:(struct { double x1; double x2; })arg3 completionHandler:(id /* block */)arg4;
- (void)_receivedFullyDrawnNotification:(id)arg1;
- (void)_reloadSnapshot;
- (void)_renderMapItem;
- (void)_resetLookAroundContainerViewState;
- (void)_resetState;
- (void)_setupLookAroundConstraints;
- (void)_setupObserver;
- (void)_setupSnapshotConstraints;
- (void)_takeSnapshotCompleted;
- (void)_takeSnapshotWithCompletionHandler:(id /* block */)arg1 isReload:(bool)arg2;
- (void)_updateBorders;
- (void)cancel;
- (void)dealloc;
- (bool)hideLookAroundView;
- (void)infoCardThemeChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)loadMapItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadMapItem:(id)arg1 coordinateSpan:(struct { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (id)mapItem;
- (void)setHideLookAroundView:(bool)arg1;
- (void)setShouldResolveMapItem:(bool)arg1;
- (void)setShouldShowBorders:(bool)arg1;
- (bool)shouldResolveMapItem;
- (bool)shouldShowBorders;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;
- (void)triggerAnimation;

@end
