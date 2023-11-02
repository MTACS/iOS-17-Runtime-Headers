
@interface SBSRemoteAlertDefinition : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying> {
    NSString * _configurationIdentifier;
    bool  _forCarPlay;
    NSString * _impersonatedCarPlayAppIdentifier;
    bool  _prefersEmbeddedDisplayPresentation;
    RBSProcessIdentity * _sceneProvidingProcess;
    NSString * _secondaryConfigurationIdentifier;
    NSString * _secondaryViewControllerClassName;
    NSString * _serviceName;
    bool  _supportsMultipleDisplayPresentations;
    NSDictionary * _userInfo;
    NSString * _viewControllerClassName;
}

@property (nonatomic, readonly, copy) NSString *configurationIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForCarPlay, nonatomic) bool forCarPlay;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *impersonatedCarPlayAppIdentifier;
@property (nonatomic) bool prefersEmbeddedDisplayPresentation;
@property (nonatomic, readonly) RBSProcessIdentity *sceneProvidingProcess;
@property (nonatomic, copy) NSString *secondaryConfigurationIdentifier;
@property (nonatomic, copy) NSString *secondaryViewControllerClassName;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsMultipleDisplayPresentations;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, readonly, copy) NSString *viewControllerClassName;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

- (void).cxx_destruct;
- (id)configurationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)impersonatedCarPlayAppIdentifier;
- (id)initWithSceneProvidingProcess:(id)arg1 configurationIdentifier:(id)arg2;
- (id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isForCarPlay;
- (bool)prefersEmbeddedDisplayPresentation;
- (id)sceneProvidingProcess;
- (id)secondaryConfigurationIdentifier;
- (id)secondaryViewControllerClassName;
- (id)serviceName;
- (void)setForCarPlay:(bool)arg1;
- (void)setImpersonatedCarPlayAppIdentifier:(id)arg1;
- (void)setPrefersEmbeddedDisplayPresentation:(bool)arg1;
- (void)setSecondaryConfigurationIdentifier:(id)arg1;
- (void)setSecondaryViewControllerClassName:(id)arg1;
- (void)setSupportsMultipleDisplayPresentations:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)supportsMultipleDisplayPresentations;
- (id)userInfo;
- (id)viewControllerClassName;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (id)definitionWithServiceName:(id)arg1 legacyAlertOptions:(id)arg2;

@end
