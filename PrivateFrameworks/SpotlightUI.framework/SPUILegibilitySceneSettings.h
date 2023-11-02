
@interface SPUILegibilitySceneSettings : UIApplicationSceneSettings <SPUILegibilitySceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (readonly) Class superclass;

- (id)keyDescriptionForSetting:(long long)arg1;
- (id)legibilitySettings;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3;

@end
