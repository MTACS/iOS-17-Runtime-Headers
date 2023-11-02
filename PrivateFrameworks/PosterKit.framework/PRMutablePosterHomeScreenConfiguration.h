
@interface PRMutablePosterHomeScreenConfiguration : PRPosterHomeScreenConfiguration {
    PRPosterGradientHomeScreenAppearance * _gradientAppearance;
    PRPosterHomePosterHomeScreenAppearance * _homePosterAppearance;
    PRPosterLockPosterHomeScreenAppearance * _lockPosterAppearance;
    unsigned long long  _selectedAppearanceType;
    PRPosterSolidColorHomeScreenAppearance * _solidColorAppearance;
}

@property (nonatomic, copy) PRPosterGradientHomeScreenAppearance *gradientAppearance;
@property (nonatomic, copy) PRPosterHomePosterHomeScreenAppearance *homePosterAppearance;
@property (nonatomic, copy) PRPosterLockPosterHomeScreenAppearance *lockPosterAppearance;
@property (nonatomic) unsigned long long selectedAppearanceType;
@property (nonatomic, copy) PRPosterSolidColorHomeScreenAppearance *solidColorAppearance;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)gradientAppearance;
- (id)homePosterAppearance;
- (id)initWithSelectedAppearanceType:(unsigned long long)arg1 lockPosterAppearance:(id)arg2 solidColorAppearance:(id)arg3 gradientAppearance:(id)arg4 homePosterAppearance:(id)arg5;
- (id)lockPosterAppearance;
- (unsigned long long)selectedAppearanceType;
- (void)setGradientAppearance:(id)arg1;
- (void)setHomePosterAppearance:(id)arg1;
- (void)setLockPosterAppearance:(id)arg1;
- (void)setSelectedAppearanceType:(unsigned long long)arg1;
- (void)setSolidColorAppearance:(id)arg1;
- (id)solidColorAppearance;

@end
