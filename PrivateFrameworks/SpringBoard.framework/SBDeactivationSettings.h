
@interface SBDeactivationSettings : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, NSCopying, SBDeactivationSettings> {
    BSMutableSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyDeactivationSettings:(id)arg1;
- (bool)boolForDeactivationSetting:(unsigned int)arg1;
- (void)clearDeactivationSettings;
- (id)copyDeactivationSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)flagForDeactivationSetting:(unsigned int)arg1;
- (id)init;
- (bool)isEmpty;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned int)arg2;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
