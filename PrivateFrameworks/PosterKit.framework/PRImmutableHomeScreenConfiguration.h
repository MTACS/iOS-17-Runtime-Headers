
@interface PRImmutableHomeScreenConfiguration : PRPosterHomeScreenConfiguration {
    PRPosterGradientHomeScreenAppearance * _gradientAppearance;
    PRPosterHomePosterHomeScreenAppearance * _homePosterAppearance;
    PRPosterLockPosterHomeScreenAppearance * _lockPosterAppearance;
    unsigned long long  _selectedAppearanceType;
    PRPosterSolidColorHomeScreenAppearance * _solidColorAppearance;
}

- (void).cxx_destruct;
- (id)gradientAppearance;
- (id)homePosterAppearance;
- (id)initWithSelectedAppearanceType:(unsigned long long)arg1 lockPosterAppearance:(id)arg2 solidColorAppearance:(id)arg3 gradientAppearance:(id)arg4 homePosterAppearance:(id)arg5;
- (id)lockPosterAppearance;
- (unsigned long long)selectedAppearanceType;
- (id)solidColorAppearance;

@end
