
@interface PRImmutablePosterTitleStyleConfiguration : PRPosterTitleStyleConfiguration {
    bool  _alternateDateEnabled;
    double  _contentsLuminance;
    NSString * _groupName;
    unsigned long long  _preferredTitleAlignment;
    unsigned long long  _preferredTitleLayout;
    PRPosterTimeFontConfiguration * _timeFontConfiguration;
    NSString * _timeNumberingSystem;
    PRPosterColor * _titleColor;
    bool  _userConfigured;
}

- (void).cxx_destruct;
- (double)contentsLuminance;
- (id)groupName;
- (id)initWithTimeFontConfiguration:(id)arg1 preferredTitleAlignment:(unsigned long long)arg2 preferredTitleLayout:(unsigned long long)arg3 titleColor:(id)arg4 timeNumberingSystem:(id)arg5 userConfigured:(bool)arg6 contentsLuminance:(double)arg7 alternateDateEnabled:(bool)arg8 groupName:(id)arg9;
- (bool)isAlternateDateEnabled;
- (bool)isUserConfigured;
- (unsigned long long)preferredTitleAlignment;
- (unsigned long long)preferredTitleLayout;
- (id)timeFontConfiguration;
- (id)timeNumberingSystem;
- (id)titleColor;

@end
