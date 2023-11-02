
@interface SBActivationSettings : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, NSCopying, SBActivationSettings> {
    BSMutableSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_settingsAreValidToMoveContentToNewScene;
- (void)applyActivationSettings:(id)arg1;
- (bool)boolForActivationSetting:(unsigned int)arg1;
- (void)clearActivationSettings;
- (id)copyActivationSettings;
- (id)copyActivationSettingsPassingFilter:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)flagForActivationSetting:(unsigned int)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forActivationSetting:(unsigned int)arg2;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
