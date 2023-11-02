
@interface SBSceneSnapshotRequestContext : NSObject {
    <SBSceneSnapshotReferenceFrameProviding> * _embeddedDisplayReferenceFrameProvider;
    SBLayoutStateTransitionContext * _sceneDisplayLayoutStateTransitionContext;
    <SBSceneSnapshotReferenceFrameProviding> * _sceneDisplayReferenceFrameProvider;
    unsigned long long  _sceneDisplayWindowManagementStyle;
}

@property (nonatomic, retain) <SBSceneSnapshotReferenceFrameProviding> *embeddedDisplayReferenceFrameProvider;
@property (nonatomic, retain) SBLayoutStateTransitionContext *sceneDisplayLayoutStateTransitionContext;
@property (nonatomic, retain) <SBSceneSnapshotReferenceFrameProviding> *sceneDisplayReferenceFrameProvider;
@property (nonatomic) unsigned long long sceneDisplayWindowManagementStyle;

- (void).cxx_destruct;
- (id)embeddedDisplayReferenceFrameProvider;
- (id)sceneDisplayLayoutStateTransitionContext;
- (id)sceneDisplayReferenceFrameProvider;
- (unsigned long long)sceneDisplayWindowManagementStyle;
- (void)setEmbeddedDisplayReferenceFrameProvider:(id)arg1;
- (void)setSceneDisplayLayoutStateTransitionContext:(id)arg1;
- (void)setSceneDisplayReferenceFrameProvider:(id)arg1;
- (void)setSceneDisplayWindowManagementStyle:(unsigned long long)arg1;

@end
