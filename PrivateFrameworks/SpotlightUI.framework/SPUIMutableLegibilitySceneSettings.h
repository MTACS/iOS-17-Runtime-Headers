
@interface SPUIMutableLegibilitySceneSettings : UIMutableApplicationSceneSettings <SPUILegibilitySceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (readonly) Class superclass;

- (id)keyDescriptionForSetting:(long long)arg1;
- (id)legibilitySettings;
- (void)setLegibilitySettings:(id)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3;

@end
