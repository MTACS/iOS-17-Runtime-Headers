
@interface SBWorkspaceEntity : NSObject <BSDescriptionProviding, NSCopying, SBActivationSettings, SBDeactivationSettings, SBLayoutElementDescriptor> {
    SBActivationSettings * _activationSettings;
    SBDeactivationSettings * _deactivationSettings;
    NSString * _identifier;
    long long  _layoutRole;
}

@property (nonatomic, readonly) SBActivationSettings *activationSettings;
@property (nonatomic, readonly) SBDeactivationSettings *deactivationSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) id /* block */ entityGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEmptyWorkspaceEntity;
@property (nonatomic, readonly) bool isHomeScreenEntity;
@property (nonatomic, readonly) bool isPreviousWorkspaceEntity;
@property (nonatomic, readonly) unsigned long long layoutAttributes;
@property (nonatomic) long long layoutRole;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportedLayoutRoles;
@property (nonatomic, readonly) bool supportsPresentationAtAnySize;
@property (nonatomic, readonly) bool supportsSplitView;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (nonatomic, readonly) Class viewControllerClass;
@property (nonatomic, readonly) bool wantsExclusiveForeground;

+ (id)entity;

- (void).cxx_destruct;
- (id /* block */)_generator;
- (bool)_supportsLayoutRole:(long long)arg1;
- (id)activationSettings;
- (id)appClipPlaceholderEntity;
- (id)applicationSceneEntity;
- (void)applyActivationSettings:(id)arg1;
- (void)applyDeactivationSettings:(id)arg1;
- (bool)boolForActivationSetting:(unsigned int)arg1;
- (bool)boolForDeactivationSetting:(unsigned int)arg1;
- (void)clearActivationSettings;
- (void)clearDeactivationSettings;
- (id)copyActivationSettings;
- (id)copyDeactivationSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deactivationSettings;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)deviceApplicationSceneEntity;
- (id)displayItemRepresentation;
- (id /* block */)entityGenerator;
- (long long)flagForActivationSetting:(unsigned int)arg1;
- (long long)flagForDeactivationSetting:(unsigned int)arg1;
- (bool)hasLayoutAttributes:(unsigned long long)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 displayChangeSettings:(id)arg2;
- (bool)isAnalogousToEntity:(id)arg1;
- (bool)isAppClipPlaceholderEntity;
- (bool)isApplicationSceneEntity;
- (bool)isDeviceApplicationSceneEntity;
- (bool)isEmptyWorkspaceEntity;
- (bool)isHomeScreenEntity;
- (bool)isPreviousWorkspaceEntity;
- (unsigned long long)layoutAttributes;
- (long long)layoutRole;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (bool)representsSameLayoutElementAsDescriptor:(id)arg1;
- (void)setFlag:(long long)arg1 forActivationSetting:(unsigned int)arg2;
- (void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned int)arg2;
- (void)setLayoutRole:(long long)arg1;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedLayoutRoles;
- (bool)supportsLayoutRole:(long long)arg1;
- (bool)supportsPresentationAtAnySize;
- (bool)supportsSplitView;
- (id)uniqueIdentifier;
- (Class)viewControllerClass;
- (bool)wantsExclusiveForeground;

@end
