
@interface SBCenterIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate, SBIconListModelObserver> {
    bool  _animatingIcons;
    struct CGPoint { 
        double x; 
        double y; 
    }  _cameraPosition;
    double  _centerCol;
    double  _centerRow;
    <SBDockOffscreenFractionModifying> * _dockOffscreenFractionModifier;
    UIView * _folderView;
    <BSInvalidatable> * _iconListViewOverridingLayoutDelegateAssertion;
    double  _iconZoomedZ;
    UIView * _zoomView;
}

@property (nonatomic, readonly) bool animatingIcons;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } cameraPosition;
@property (nonatomic, readonly) double centerCol;
@property (nonatomic, readonly) double centerRow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <SBDockOffscreenFractionModifying> *dockOffscreenFractionModifier;
@property (nonatomic, readonly) SBFolderController *folderController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <BSInvalidatable> *iconListViewOverridingLayoutDelegateAssertion;
@property (nonatomic, retain) SBHCenterZoomSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *zoomView;

- (void).cxx_destruct;
- (id)_animationFactoryForDock;
- (id)_animationFactoryForFolderView;
- (id)_animationFactoryForIcon:(id)arg1;
- (void)_calculateCenters;
- (void)_calculateCentersAndCameraPosition;
- (void)_cleanupAnimation;
- (void)_cleanupAnimationIncludingDock:(bool)arg1;
- (double)_iconZoomDelay;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(bool)arg4 sharedCompletion:(id /* block */)arg5;
- (void)_positionView:(id)arg1 forIcon:(id)arg2;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_setAnimationFraction:(double)arg1 withCenter:(struct CGPoint { double x1; double x2; })arg2;
- (void)_updateDockForFraction:(double)arg1;
- (double)_zPositionForView:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 andFraction:(double)arg3;
- (bool)animatingIcons;
- (struct CGPoint { double x1; double x2; })cameraPosition;
- (double)centerCol;
- (double)centerRow;
- (id)dockOffscreenFractionModifier;
- (id)folderController;
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;
- (void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (struct CGPoint { double x1; double x2; })iconListView:(id)arg1 centerForIconCoordinate:(struct SBIconCoordinate { long long x1; long long x2; })arg2 metrics:(id)arg3 proposedCenter:(struct CGPoint { double x1; double x2; })arg4;
- (struct CGPoint { double x1; double x2; })iconListView:(id)arg1 originForIconCoordinate:(struct SBIconCoordinate { long long x1; long long x2; })arg2 metrics:(id)arg3 proposedOrigin:(struct CGPoint { double x1; double x2; })arg4;
- (id)iconListViewOverridingLayoutDelegateAssertion;
- (id)initWithFolderController:(id)arg1;
- (void)setDockOffscreenFractionModifier:(id)arg1;
- (void)setFraction:(double)arg1 withCenter:(struct CGPoint { double x1; double x2; })arg2;
- (void)setIconListViewOverridingLayoutDelegateAssertion:(id)arg1;
- (id)zoomView;

@end
