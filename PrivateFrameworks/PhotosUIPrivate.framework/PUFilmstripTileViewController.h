
@interface PUFilmstripTileViewController : PUImageTileViewController <PUAssetViewModelChangeObserver, PUBrowsingVideoPlayerTimeObserver> {
    struct CGSize { 
        double width; 
        double height; 
    }  _expandedSize;
    bool  _isExpanded;
    struct CGSize { 
        double width; 
        double height; 
    }  _unexpandedSize;
    PUFilmstripWrapperView * _wrapperView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } expandedSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExpanded;
@property (readonly) Class superclass;
@property (nonatomic) struct CGSize { double x1; double x2; } unexpandedSize;
@property (nonatomic, readonly) PUFilmstripWrapperView *wrapperView;

- (void).cxx_destruct;
- (id)_currentIndicatorInfos;
- (void)_updateFilmStripContents;
- (void)_updateFilmstripView;
- (void)applyLayoutInfo:(id)arg1;
- (void)becomeReusable;
- (void)didChangeAnimating;
- (void)didChangeVisibleRect;
- (struct CGSize { double x1; double x2; })expandedSize;
- (bool)isExpanded;
- (id)loadView;
- (void)setAssetViewModel:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpandedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIsExpanded:(bool)arg1;
- (void)setUnexpandedSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })targetSizeForProposedTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })unexpandedSize;
- (void)videoPlayer:(id)arg1 currentTimeDidChange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)videoPlayer:(id)arg1 desiredSeekTimeDidChange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (bool)wantsVisibleRectChanges;
- (id)wrapperView;

@end
