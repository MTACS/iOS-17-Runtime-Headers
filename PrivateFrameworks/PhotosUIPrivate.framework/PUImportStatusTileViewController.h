
@interface PUImportStatusTileViewController : PUTileViewController <PUAssetViewModelChangeObserver> {
    bool  __isPerformingChanges;
    PUAssetViewModel * _assetViewModel;
    UIView * _errorView;
    UIActivityIndicatorView * _progressIndicatorView;
    UIView * _successView;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic) bool _isPerformingChanges;
@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isPerformingChanges;
- (void)_updateIfNeeded;
- (void)_updateStatusView;
- (void)applyLayoutInfo:(id)arg1;
- (id)assetViewModel;
- (void)becomeReusable;
- (void)performChanges:(id /* block */)arg1;
- (void)setAssetViewModel:(id)arg1;
- (void)set_isPerformingChanges:(bool)arg1;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
