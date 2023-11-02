
@interface PXMediaViewControllerEventTracker : PXViewControllerEventTracker <PXChangeObserver, PXMediaViewControllerEventTracker> {
    _PXTrackedMediaRecord * _currentlyVisibleMediaRecord;
    bool  _didInvalidateCurrentlyVisibleMediaOnce;
    <PXDisplayAsset> * _displayedAsset;
    <PXDisplayAssetCollection> * _displayedAssetCollection;
    id  _lastVisibleMedia;
    long long  _mediaViewedSignpost;
    long long  _specificMediaViewedSignpost;
    NSString * _viewName;
}

@property (nonatomic, retain) _PXTrackedMediaRecord *currentlyVisibleMediaRecord;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <PXDisplayAsset> *displayedAsset;
@property (nonatomic, retain) <PXDisplayAssetCollection> *displayedAssetCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id lastVisibleMedia;
@property (nonatomic) long long mediaViewedSignpost;
@property (nonatomic, copy) NSMutableDictionary *payload;
@property (nonatomic) long long specificMediaViewedSignpost;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *viewName;

- (void).cxx_destruct;
- (void)_invalidateCurrentlyVisibleMedia;
- (void)_updateCurrentlyVisibleMedia;
- (id)currentlyVisibleMediaRecord;
- (id)displayedAsset;
- (id)displayedAssetCollection;
- (id)init;
- (id)initWithViewName:(id)arg1;
- (id)lastVisibleMedia;
- (void)logDidEndViewingMedia:(id)arg1 mediaKind:(long long)arg2 duration:(double)arg3;
- (void)logDidStartViewingMedia:(id)arg1 mediaKind:(long long)arg2;
- (long long)mediaViewedSignpost;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setCurrentlyVisibleMediaRecord:(id)arg1;
- (void)setDisplayedAsset:(id)arg1;
- (void)setDisplayedAssetCollection:(id)arg1;
- (void)setLastVisibleMedia:(id)arg1;
- (void)setMediaViewedSignpost:(long long)arg1;
- (void)setSpecificMediaViewedSignpost:(long long)arg1;
- (long long)specificMediaViewedSignpost;
- (id)viewName;

@end
