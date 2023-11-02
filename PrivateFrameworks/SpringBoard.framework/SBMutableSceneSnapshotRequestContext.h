
@interface SBMutableSceneSnapshotRequestContext : SBSceneSnapshotRequestContext

@property (nonatomic, retain) <SBSceneSnapshotReferenceFrameProviding> *embeddedDisplayReferenceFrameProvider;
@property (nonatomic, retain) SBLayoutStateTransitionContext *sceneDisplayLayoutStateTransitionContext;
@property (nonatomic, retain) <SBSceneSnapshotReferenceFrameProviding> *sceneDisplayReferenceFrameProvider;
@property (nonatomic) unsigned long long sceneDisplayWindowManagementStyle;

@end
