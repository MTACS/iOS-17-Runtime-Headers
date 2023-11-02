
@interface PBUIPosterLockViewController : PBUIPosterVariantViewController <PBUIPosterReplicaPortalProviding> {
    unsigned int  _floatingContextID;
    PBUIPosterFloatingLayerReplica * _floatingLayerStandIn;
    <UIScenePresenter> * _floatingPresenter;
    PBUIPosterFloatingView * _realFloatingView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateFloatingLayer;
- (bool)areSettingsAppropriateForSnapshotting:(id)arg1;
- (id)initWithScene:(id)arg1 cache:(id)arg2;
- (void)invalidate;
- (void)legibilitySettingsDidChange;
- (id)portalProviderForFloatingLayer;
- (id)portalSourceForReplicaView:(id)arg1;
- (id)registerPortalSourceObserver:(id)arg1;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (bool)updatePresentation;
- (long long)variant;

@end
