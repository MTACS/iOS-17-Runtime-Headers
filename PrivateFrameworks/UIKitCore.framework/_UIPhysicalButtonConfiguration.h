
@interface _UIPhysicalButtonConfiguration : NSObject <BSDebugDescriptionProviding, BSXPCCoding, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    unsigned long long  _behavior;
    _UIPhysicalButtonBehaviorOptions * _behaviorOptions;
    unsigned long long  _button;
    unsigned long long  _generation;
    NSString * _name;
    bool  _wantsSystemShellExclusivePriority;
}

@property (nonatomic, readonly) unsigned long long _behavior;
@property (nonatomic, readonly, copy) _UIPhysicalButtonBehaviorOptions *_behaviorOptions;
@property (nonatomic, readonly) unsigned long long _button;
@property (nonatomic, readonly) unsigned long long _generation;
@property (setter=_setName:, nonatomic, copy) NSString *_name;
@property (setter=_setWantsSystemShellExclusivePriority:, nonatomic) bool _wantsSystemShellExclusivePriority;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_cameraShutterConfigurations;
+ (id)_cameraShutterConfigurationsWithOptions:(id)arg1;
+ (id)_configurationWithPhysicalButton:(unsigned long long)arg1 behavior:(unsigned long long)arg2 behaviorOptions:(id)arg3;
+ (id)_ringerButtonDynamicActionConfiguration;
+ (id)_volumeCameraShutterConfigurationsWithOptionsProvider:(id /* block */)arg1;
+ (id)_volumeConfigurations;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_behavior;
- (id)_behaviorOptions;
- (unsigned long long)_button;
- (unsigned long long)_generation;
- (id)_name;
- (void)_setName:(id)arg1;
- (void)_setWantsSystemShellExclusivePriority:(bool)arg1;
- (bool)_wantsSystemShellExclusivePriority;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
