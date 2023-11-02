
@interface SBApplicationBlurSnapshotGenerationContainerView : UIView {
    UIView * _liveBlurView;
    UIView * _realSnapshotView;
    UIView * _wallpaperView;
}

@property (nonatomic, retain) UIView *liveBlurView;
@property (nonatomic, retain) UIView *realSnapshotView;
@property (nonatomic, retain) UIView *wallpaperView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)liveBlurView;
- (id)realSnapshotView;
- (void)setLiveBlurView:(id)arg1;
- (void)setRealSnapshotView:(id)arg1;
- (void)setWallpaperView:(id)arg1;
- (id)wallpaperView;

@end
