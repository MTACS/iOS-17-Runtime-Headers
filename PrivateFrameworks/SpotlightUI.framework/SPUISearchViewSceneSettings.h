
@interface SPUISearchViewSceneSettings : SPUILegibilitySceneSettings <SPUISearchViewSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long presentationIntent;
@property (nonatomic, readonly) unsigned long long presentationSource;
@property (nonatomic, readonly) double revealProgress;
@property (readonly) Class superclass;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)presentationIntent;
- (unsigned long long)presentationSource;
- (double)revealProgress;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
