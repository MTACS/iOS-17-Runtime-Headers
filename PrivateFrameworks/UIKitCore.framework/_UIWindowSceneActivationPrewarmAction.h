
@interface _UIWindowSceneActivationPrewarmAction : BSAction

@property (nonatomic, readonly) unsigned long long deparentingPortalAlphaSourceLayerRenderId;
@property (nonatomic, readonly) NSString *interactionIdentifier;
@property (nonatomic, readonly) unsigned long long morphContainerRenderId;
@property (nonatomic, readonly) bool requestCenterSlot;
@property (nonatomic, readonly) bool requestFullscreen;
@property (nonatomic, readonly) NSString *sourceAppBundleIdentifier;
@property (nonatomic, readonly) unsigned int sourceLayerContextId;
@property (nonatomic, readonly) NSString *sourceSceneIdentifier;

+ (id)actionWithMorphContainer:(id)arg1 alphaSource:(id)arg2 sourceIdentifier:(id)arg3 interactionIdentifier:(id)arg4 requestCenterSlot:(bool)arg5 requestFullscreen:(bool)arg6 responseHandler:(id /* block */)arg7;

- (long long)UIActionType;
- (unsigned long long)deparentingPortalAlphaSourceLayerRenderId;
- (id)interactionIdentifier;
- (unsigned long long)morphContainerRenderId;
- (bool)requestCenterSlot;
- (bool)requestFullscreen;
- (id)sourceAppBundleIdentifier;
- (unsigned int)sourceLayerContextId;
- (id)sourceSceneIdentifier;

@end
