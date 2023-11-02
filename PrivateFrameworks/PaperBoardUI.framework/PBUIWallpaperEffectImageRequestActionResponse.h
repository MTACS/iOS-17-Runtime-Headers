
@interface PBUIWallpaperEffectImageRequestActionResponse : BSActionResponse

@property (nonatomic, readonly) long long actualStyle;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (long long)actualStyle;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
