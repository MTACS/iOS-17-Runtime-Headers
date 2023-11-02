
@interface FBSceneUpdateContext : NSObject <BSDescriptionProviding> {
    <NSObject><NSCopying> * _clientContext;
    bool  _lifecycleExternallyManaged;
    NSString * _sceneID;
    FBSSceneSettings * _settings;
    FBSSceneSettingsDiff * _settingsDiff;
    unsigned long long  _transactionID;
    FBSSceneTransitionContext * _transitionContext;
}

@property (nonatomic, copy) <NSObject><NSCopying> *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *sceneID;
@property (nonatomic, readonly) FBSSceneSettings *settings;
@property (nonatomic, readonly) FBSSceneSettingsDiff *settingsDiff;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long transactionID;
@property (nonatomic, readonly) FBSSceneTransitionContext *transitionContext;

+ (id)contextWithSceneID:(id)arg1 transactionID:(unsigned long long)arg2 settings:(id)arg3 settingsDiff:(id)arg4 transitionContext:(id)arg5;

- (void).cxx_destruct;
- (id)clientContext;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)isClientLifecycleExternallyManaged;
- (id)sceneID;
- (void)setClientContext:(id)arg1;
- (id)settings;
- (id)settingsDiff;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)transactionID;
- (id)transitionContext;

@end
