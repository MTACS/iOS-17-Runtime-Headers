
@interface PRMutablePosterTitleStyleConfiguration : PRPosterTitleStyleConfiguration {
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

@property (getter=isAlternateDateEnabled, nonatomic) bool alternateDateEnabled;
@property (nonatomic) double contentsLuminance;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic) unsigned long long preferredTitleAlignment;
@property (nonatomic) unsigned long long preferredTitleLayout;
@property (nonatomic, copy) PRPosterTimeFontConfiguration *timeFontConfiguration;
@property (nonatomic, copy) NSString *timeNumberingSystem;
@property (nonatomic, copy) PRPosterColor *titleColor;
@property (getter=isUserConfigured, nonatomic) bool userConfigured;

- (void).cxx_destruct;
- (double)contentsLuminance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)groupName;
- (id)initWithTimeFontConfiguration:(id)arg1 preferredTitleAlignment:(unsigned long long)arg2 preferredTitleLayout:(unsigned long long)arg3 titleColor:(id)arg4 timeNumberingSystem:(id)arg5 userConfigured:(bool)arg6 contentsLuminance:(double)arg7 alternateDateEnabled:(bool)arg8 groupName:(id)arg9;
- (bool)isAlternateDateEnabled;
- (bool)isUserConfigured;
- (unsigned long long)preferredTitleAlignment;
- (unsigned long long)preferredTitleLayout;
- (void)setAlternateDateEnabled:(bool)arg1;
- (void)setContentsLuminance:(double)arg1;
- (void)setGroupName:(id)arg1;
- (void)setPreferredTitleAlignment:(unsigned long long)arg1;
- (void)setPreferredTitleLayout:(unsigned long long)arg1;
- (void)setTimeFontConfiguration:(id)arg1;
- (void)setTimeNumberingSystem:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setUserConfigured:(bool)arg1;
- (id)timeFontConfiguration;
- (id)timeNumberingSystem;
- (id)titleColor;

@end
