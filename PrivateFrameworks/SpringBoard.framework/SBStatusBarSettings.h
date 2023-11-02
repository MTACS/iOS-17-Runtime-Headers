
@interface SBStatusBarSettings : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, NSCopying, NSMutableCopying> {
    BSMutableSettings * _settings;
}

@property (getter=_BSSettings, nonatomic, readonly) BSSettings *BSSettings;
@property (nonatomic, readonly) NSNumber *alpha;
@property (nonatomic, readonly, copy) NSSet *backgroundActivitiesToSuppress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_BSSettings;
- (id)_initWithBSSettings:(id)arg1;
- (id)alpha;
- (id)backgroundActivitiesToSuppress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)legibilitySettings;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)style;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
