
@interface SPUIMutableSearchViewSceneSettings : SPUIMutableLegibilitySceneSettings <SPUISearchViewSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long presentationIntent;
@property (nonatomic) unsigned long long presentationSource;
@property (nonatomic) double revealProgress;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (unsigned long long)presentationIntent;
- (unsigned long long)presentationSource;
- (double)revealProgress;
- (void)setPresentationIntent:(unsigned long long)arg1;
- (void)setPresentationSource:(unsigned long long)arg1;
- (void)setRevealProgress:(double)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
