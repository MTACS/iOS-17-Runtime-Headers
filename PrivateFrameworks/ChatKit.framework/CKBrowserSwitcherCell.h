
@interface CKBrowserSwitcherCell : UIView {
    UIView * _browserSnapshotView;
    UIView * _extensionInterruptedView;
    IMBalloonPlugin * _plugin;
    CKSnapshotCacheKey * _snapshotCacheKey;
    bool  _usingFallbackSnapshot;
}

@property (nonatomic, retain) UIView *browserSnapshotView;
@property (nonatomic, retain) UIView *extensionInterruptedView;
@property (nonatomic, retain) IMBalloonPlugin *plugin;
@property (nonatomic, retain) CKSnapshotCacheKey *snapshotCacheKey;
@property (getter=isUsingFallbackSnapshot, nonatomic) bool usingFallbackSnapshot;

- (void).cxx_destruct;
- (void)_handleBrowserSnapshotDidChange:(id)arg1;
- (void)_updateSnapshotView;
- (id)balloonPluginManager;
- (id)browserSnapshotView;
- (void)dealloc;
- (id)extensionInterruptedView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isUsingFallbackSnapshot;
- (void)layoutSubviews;
- (id)plugin;
- (void)setBrowserSnapshotView:(id)arg1;
- (void)setExtensionInterruptedView:(id)arg1;
- (void)setPlugin:(id)arg1;
- (void)setPlugin:(id)arg1 withSnapshotCacheKey:(id)arg2;
- (void)setSnapshotCacheKey:(id)arg1;
- (void)setUsingFallbackSnapshot:(bool)arg1;
- (void)showExtensionInterruptedViewWithDisplayName:(id)arg1;
- (id)snapshotCacheKey;

@end
