
@interface PBUIWallpaperUpdateLocationsAction : BSAction

@property (nonatomic, readonly) long long locations;
@property (nonatomic, readonly) long long wallpaperMode;

- (id)initWithLocations:(long long)arg1 wallpaperMode:(long long)arg2 responder:(id)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)locations;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (long long)wallpaperMode;

@end
