
@interface FBSSceneSpecification : NSObject <BSDescriptionProviding, NSCopying>

@property (nonatomic, readonly) bool affectsAppLifecycleIfInternal;
@property (nonatomic, readonly) bool affectsScreenOrientation;
@property (nonatomic, readonly) bool allowsConfigurationByAppDelegate;
@property (nonatomic, readonly) NSDictionary *baseSceneComponentClassDictionary;
@property (nonatomic, readonly) Class clientAgentClass;
@property (nonatomic, readonly) Class clientSettingsClass;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSArray *defaultExtensions;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *finalActionHandlers;
@property (nonatomic, readonly) NSArray *finalSettingsDiffActions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class hostAgentClass;
@property (nonatomic, readonly) NSArray *initialActionHandlers;
@property (nonatomic, readonly) NSArray *initialSettingsDiffActions;
@property (nonatomic, readonly) bool isInternal;
@property (nonatomic, readonly) bool isUIKitManaged;
@property (nonatomic, readonly) Class lifecycleMonitorClass;
@property (nonatomic, readonly) NSString *overlayAppSceneConfigurationName;
@property (nonatomic, readonly) Class sceneSubstrateClass;
@property (nonatomic, readonly) Class settingsClass;
@property (readonly) Class superclass;
@property (nonatomic, readonly) Class transitionContextClass;
@property (nonatomic, readonly) Class uiSceneMinimumClass;
@property (nonatomic, readonly) NSString *uiSceneSessionRole;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (id)specification;

- (bool)_isSignificantTransitionContext:(id)arg1;
- (Class)clientAgentClass;
- (Class)clientSettingsClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultExtensions;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (Class)hostAgentClass;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (Class)settingsClass;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (Class)transitionContextClass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)affectsAppLifecycleIfInternal;
- (bool)affectsScreenOrientation;
- (bool)allowsConfigurationByAppDelegate;
- (id)baseSceneComponentClassDictionary;
- (id)connectionHandlers;
- (id)coreSceneComponentClassDictionary;
- (id)disconnectionHandlers;
- (id)finalActionHandlers;
- (id)finalSettingsDiffActions;
- (id)initialActionHandlers;
- (id)initialSettingsDiffActions;
- (bool)isInternal;
- (bool)isUIKitManaged;
- (Class)lifecycleMonitorClass;
- (id)overlayAppSceneConfigurationName;
- (Class)sceneSubstrateClass;
- (Class)uiSceneMinimumClass;
- (id)uiSceneSessionRole;

@end
