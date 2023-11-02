
@interface SBShelfLiveContentOverlayCoordinator : NSObject <SBAppSwitcherSnapshotImageCacheObserver, SBSwitcherLiveContentOverlayCoordinating> {
    bool  _isSnapshotCacheObserver;
    NSMutableDictionary * _leafAppLayoutsToOverlays;
    <SBShelfLiveContentOverlayCoordinatorDelegate> * _shelfDelegate;
    long long  containerOrientation;
    <SBSwitcherLiveContentOverlayCoordinatorDelegate> * delegate;
    bool  liveContentOverlayUpdatesSuspended;
}

@property (nonatomic) long long containerOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSwitcherLiveContentOverlayCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=areLiveContentOverlayUpdatesSuspended, nonatomic) bool liveContentOverlayUpdatesSuspended;
@property (nonatomic, readonly) <SBShelfLiveContentOverlayCoordinatorDelegate> *shelfDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addOverlaysIfNeededForTransitionContext:(id)arg1;
- (void)appLayoutDidBecomeHidden:(id)arg1;
- (id)appLayoutForKeyboardFocusedScene;
- (void)appLayoutWillBecomeVisible:(id)arg1;
- (bool)areLiveContentOverlayUpdatesSuspended;
- (void)cleanUpAfterCoordinatedLayoutStateTransitionWithContext:(id)arg1;
- (long long)containerOrientation;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2;
- (void)didUpdateCacheEntry:(id)arg1;
- (id)initWithShelfDelegate:(id)arg1;
- (void)invalidate;
- (void)itemContainerForAppLayout:(id)arg1 willBeReusedForAppLayout:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (bool)performSwitcherKeyboardShortcutAction:(long long)arg1;
- (void)prepareForCoordinatedLayoutStateTransitionWithContext:(id)arg1;
- (void)setContainerOrientation:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLiveContentOverlayUpdatesSuspended:(bool)arg1;
- (id)shelfDelegate;
- (bool)wantsEdgeProtectForHomeGestureForAppLayout:(id)arg1;
- (bool)wantsHomeAffordanceAutoHideForAppLayout:(id)arg1;
- (void)willRotateFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 alongsideContainerView:(id)arg3 animated:(bool)arg4;

@end
