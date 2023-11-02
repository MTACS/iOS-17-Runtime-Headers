
@interface SBHomeScreenPreviewView : UIView <SBIconViewDelegate, SBIconViewProviding> {
    <SBDockOffscreenFractionModifying> * _dockOffscreenModifier;
    UIView * _floatingDock;
    SBFloatingDockViewController * _floatingDockViewController;
    UIView * _folderContent;
    _SBHomeScreenFolderDelegate * _folderDelegate;
    SBHIconManager * _iconManager;
    SBRootFolderController * _rootFolderController;
    unsigned long long  _snapshotOptions;
    UIStatusBar * _statusBar;
    SBWindowSceneStatusBarManager * _windowSceneStatusBarManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SBDockOffscreenFractionModifying> *dockOffscreenModifier;
@property (nonatomic, readonly) SBFloatingDockViewController *floatingDockViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBHIconManager *iconManager;
@property (nonatomic, readonly) unsigned long long snapshotOptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)behaviorDelegateForIconView:(id)arg1;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (void)dealloc;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (id)dockOffscreenModifier;
- (id)floatingDockViewController;
- (id)iconManager;
- (id)iconView:(id)arg1 backgroundViewForComponentsOfType:(long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 iconManager:(id)arg2 wallpaperController:(id)arg3 options:(unsigned long long)arg4 wallpaperImage:(id)arg5 listView:(id)arg6;
- (bool)isIconViewRecycled:(id)arg1;
- (void)layoutSubviews;
- (id)makeFolderContentWithWallpaperController:(id)arg1 legibilitySettings:(id)arg2 options:(unsigned long long)arg3;
- (id)makeIconFolderContentWithWallpaperController:(id)arg1 legibilitySettings:(id)arg2 options:(unsigned long long)arg3;
- (id)makeSilhouetteFolderContent;
- (void)recycleIconView:(id)arg1;
- (unsigned long long)snapshotOptions;

@end
