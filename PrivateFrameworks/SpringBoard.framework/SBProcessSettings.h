
@interface SBProcessSettings : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, NSCopying, SBProcessSettings> {
    BSMutableSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyProcessSettings:(id)arg1;
- (bool)boolForProcessSetting:(long long)arg1;
- (void)clearProcessSettings;
- (id)copyProcessSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)flagForProcessSetting:(long long)arg1;
- (id)init;
- (bool)isEmpty;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)objectForProcessSetting:(long long)arg1;
- (void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2;
- (void)setObject:(id)arg1 forProcessSetting:(long long)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
