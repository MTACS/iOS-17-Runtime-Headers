
@interface SBAppSwitcherSnapshotViewState : NSObject {
    bool  _animatingTransition;
    SBAppSwitcherSnapshotCacheEntry * _cacheEntry;
    SBDeviceApplicationSceneHandle * _sceneHandle;
}

- (void).cxx_destruct;

@end
