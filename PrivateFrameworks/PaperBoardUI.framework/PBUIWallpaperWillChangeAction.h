
@interface PBUIWallpaperWillChangeAction : BSAction

@property (nonatomic, readonly) long long variant;

- (id)initWithVariant:(long long)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (long long)variant;

@end
