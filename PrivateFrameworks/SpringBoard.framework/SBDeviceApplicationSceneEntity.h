
@interface SBDeviceApplicationSceneEntity : SBApplicationSceneEntity

@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *sceneHandle;

+ (id)defaultEntityWithApplication:(id)arg1 sceneHandleProvider:(id)arg2 displayIdentity:(id)arg3;
+ (id)defaultEntityWithApplication:(id)arg1 targetContentIdentifier:(id)arg2 sceneHandleProvider:(id)arg3 displayIdentity:(id)arg4;
+ (id)defaultEntityWithApplicationForMainDisplay:(id)arg1;
+ (id)defaultEntityWithApplicationForMainDisplay:(id)arg1 targetContentIdentifier:(id)arg2;
+ (id)entityWithApplication:(id)arg1 scenePersistenceIdentifier:(id)arg2 sceneHandleProvider:(id)arg3 displayIdentity:(id)arg4;
+ (id)entityWithApplicationForMainDisplay:(id)arg1 withScenePersistenceIdentifier:(id)arg2;
+ (id)newEntityWithApplication:(id)arg1 sceneHandleProvider:(id)arg2 displayIdentity:(id)arg3;
+ (id)newEntityWithApplicationForMainDisplay:(id)arg1;

- (bool)_supportsLayoutRole:(long long)arg1;
- (id)deviceApplicationSceneEntity;
- (id)initWithApplication:(id)arg1 generatingNewPrimarySceneIfRequired:(bool)arg2 sceneHandleProvider:(id)arg3 displayIdentity:(id)arg4;
- (id)initWithApplication:(id)arg1 generatingNewSceneIfRequiredWithSpecification:(id)arg2 sceneHandleProvider:(id)arg3 displayIdentity:(id)arg4;
- (id)initWithApplication:(id)arg1 sceneHandleProvider:(id)arg2 displayIdentity:(id)arg3;
- (id)initWithApplication:(id)arg1 targetContentIdentifier:(id)arg2 sceneHandleProvider:(id)arg3 displayIdentity:(id)arg4;
- (id)initWithApplication:(id)arg1 uniqueIdentifier:(id)arg2 sceneHandleProvider:(id)arg3 displayIdentity:(id)arg4;
- (id)initWithApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 sceneHandleProvider:(id)arg4 displayIdentity:(id)arg5;
- (id)initWithApplicationForMainDisplay:(id)arg1;
- (id)initWithApplicationForMainDisplay:(id)arg1 generatingNewPrimarySceneIfRequired:(bool)arg2;
- (id)initWithApplicationForMainDisplay:(id)arg1 generatingNewSceneIfRequiredWithSpecification:(id)arg2;
- (id)initWithApplicationForMainDisplay:(id)arg1 targetContentIdentifier:(id)arg2;
- (id)initWithApplicationForMainDisplay:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)initWithApplicationForMainSecureDisplay:(id)arg1;
- (id)initWithApplicationSceneHandle:(id)arg1;
- (bool)isDeviceApplicationSceneEntity;
- (bool)supportsPresentationAtAnySize;
- (bool)supportsSplitView;
- (Class)viewControllerClass;
- (bool)wantsExclusiveForeground;

@end
