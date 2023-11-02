
@interface PRUISPosterTitleStyleAttributes : NSObject {
    unsigned long long  _preferredTitleAlignment;
    unsigned long long  _preferredTitleLayout;
    UIColor * _titleColor;
    UIFont * _titleFont;
    BSUIVibrancyConfiguration * _vibrancyConfiguration;
}

@property (nonatomic) unsigned long long preferredTitleAlignment;
@property (nonatomic) unsigned long long preferredTitleLayout;
@property (nonatomic, retain) UIColor *titleColor;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) BSUIVibrancyConfiguration *vibrancyConfiguration;

- (void).cxx_destruct;
- (id)initWithPRPosterTitleStyleConfiguration:(id)arg1 extensionBundleURL:(id)arg2 role:(id)arg3;
- (id)initWithTitleColor:(id)arg1 titleFont:(id)arg2 preferredTitleAlignment:(unsigned long long)arg3 preferredTitleLayout:(unsigned long long)arg4 vibrancyConfiguration:(id)arg5;
- (unsigned long long)preferredTitleAlignment;
- (unsigned long long)preferredTitleLayout;
- (void)setPreferredTitleAlignment:(unsigned long long)arg1;
- (void)setPreferredTitleLayout:(unsigned long long)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setVibrancyConfiguration:(id)arg1;
- (id)titleColor;
- (id)titleFont;
- (id)vibrancyConfiguration;

@end
