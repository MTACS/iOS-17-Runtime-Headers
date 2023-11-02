
@interface SBUIAnimationControllerActivatingAndDeactivatingAppTransitionContextProvider : NSObject <SBUIAnimationControllerTransitionContextProvider> {
    SBApplicationSceneEntity * _fromAppSceneEntity;
    SBApplicationSceneEntity * _fromApplicationSceneEntity;
    SBApplicationSceneEntity * _toAppSceneEntity;
    SBApplicationSceneEntity * _toApplicationSceneEntity;
}

@property (nonatomic, retain) SBApplicationSceneEntity *activatingAppSceneEntity;
@property (nonatomic, retain) SBApplicationSceneEntity *deactivatingAppSceneEntity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *fromApplicationSceneEntities;
@property (nonatomic, readonly) SBApplicationSceneEntity *fromApplicationSceneEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSSet *toApplicationSceneEntities;
@property (nonatomic, readonly) SBApplicationSceneEntity *toApplicationSceneEntity;

+ (id)transitionContextProviderWithToApplicationSceneEntity:(id)arg1 fromApplicationSceneEntity:(id)arg2;

- (void).cxx_destruct;
- (id)activatingAppSceneEntity;
- (id)deactivatingAppSceneEntity;
- (id)fromApplicationSceneEntities;
- (id)fromApplicationSceneEntity;
- (id)initWithToApplicationSceneEntity:(id)arg1 fromApplicationSceneEntity:(id)arg2;
- (void)setActivatingAppSceneEntity:(id)arg1;
- (void)setDeactivatingAppSceneEntity:(id)arg1;
- (id)toApplicationSceneEntities;
- (id)toApplicationSceneEntity;

@end
