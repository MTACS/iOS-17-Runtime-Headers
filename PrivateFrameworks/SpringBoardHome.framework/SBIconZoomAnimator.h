
@interface SBIconZoomAnimator : SBIconAnimator <SBIconIndexNodeObserver> {
    NSSet * _criticalIconNodeIdentifiers;
    NSMapTable * _dockIconToViewMap;
    SBIconListView * _dockListView;
    SBIconListModel * _iconListModel;
    SBIconListView * _iconListView;
    SBHIconModel * _iconModel;
    NSMapTable * _listIconToViewMap;
    double  _startTime;
}

@property (nonatomic, readonly) <SBIconZoomAnimationContaining> *animationContainer;
@property (nonatomic, retain) NSSet *criticalIconNodeIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBIconListView *dockListView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIconListView *iconListView;
@property (nonatomic, retain) SBHIconZoomSettings *settings;
@property (nonatomic, readonly) double startTime;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id /* block */)arg3;
- (void)_applyLabelAlphaFraction:(double)arg1;
- (void)_cleanupAnimation;
- (void)_cleanupZoom;
- (void)_clearObservers;
- (void)_iconModelDidRelayout:(id)arg1;
- (void)_iconModelDidReload:(id)arg1;
- (void)_invalidateAnimationForSignificantIconModelChangesForReason:(id)arg1;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(bool)arg4 sharedCompletion:(id /* block */)arg5;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_setDockListView:(id)arg1;
- (void)_setIconListView:(id)arg1;
- (void)cleanupZoom;
- (id)criticalIconNodeIdentifiers;
- (void)dealloc;
- (unsigned long long)dockIconCount;
- (id)dockListView;
- (void)enumerateIconsAndIconViewsWithHandler:(id /* block */)arg1;
- (id)iconListView;
- (id)iconViewForIcon:(id)arg1;
- (id)initWithAnimationContainer:(id)arg1;
- (bool)isPastPointOfNoReturn;
- (unsigned long long)listIconCount;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)nodeDidMoveContainedNodes:(id)arg1;
- (void)setCriticalIconNodeIdentifiers:(id)arg1;
- (double)startTime;

@end
