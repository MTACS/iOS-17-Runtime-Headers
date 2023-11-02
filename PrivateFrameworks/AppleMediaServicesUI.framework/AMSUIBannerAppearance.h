
@interface AMSUIBannerAppearance : AMSUIAppearance <NSCopying> {
    UIColor * _accessoryButtonBackgroundColor;
    UIColor * _accessoryButtonColor;
    UIFont * _accessoryButtonFont;
    UIColor * _accessorySecondaryButtonBackgroundColor;
    UIColor * _accessorySecondaryButtonColor;
    UIFont * _accessorySecondaryButtonFont;
    UIColor * _backgroundColor;
    UIImage * _backgroundImage;
    long long  _iconAnimationPlayCount;
    UIImageSymbolConfiguration * _imageSymbolConfiguration;
    UIColor * _imageTintColor;
    UIFont * _messageFont;
    UIColor * _messageTextColor;
    long long  _primaryImageRenderingMode;
    UIColor * _separatorColor;
    UIFont * _titleFont;
    UIColor * _titleTextColor;
}

@property (nonatomic, retain) UIColor *accessoryButtonBackgroundColor;
@property (nonatomic, retain) UIColor *accessoryButtonColor;
@property (nonatomic, retain) UIFont *accessoryButtonFont;
@property (nonatomic, retain) UIColor *accessorySecondaryButtonBackgroundColor;
@property (nonatomic, retain) UIColor *accessorySecondaryButtonColor;
@property (nonatomic, retain) UIFont *accessorySecondaryButtonFont;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic) long long iconAnimationPlayCount;
@property (nonatomic, retain) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (nonatomic, retain) UIColor *imageTintColor;
@property (nonatomic, retain) UIFont *messageFont;
@property (nonatomic, retain) UIColor *messageTextColor;
@property (nonatomic) long long primaryImageRenderingMode;
@property (nonatomic, retain) UIColor *separatorColor;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) UIColor *titleTextColor;

- (void).cxx_destruct;
- (id)accessoryButtonBackgroundColor;
- (id)accessoryButtonColor;
- (id)accessoryButtonFont;
- (id)accessorySecondaryButtonBackgroundColor;
- (id)accessorySecondaryButtonColor;
- (id)accessorySecondaryButtonFont;
- (id)backgroundColor;
- (id)backgroundImage;
- (long long)iconAnimationPlayCount;
- (id)imageSymbolConfiguration;
- (id)imageTintColor;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)messageFont;
- (id)messageTextColor;
- (long long)primaryImageRenderingMode;
- (id)separatorColor;
- (void)setAccessoryButtonBackgroundColor:(id)arg1;
- (void)setAccessoryButtonColor:(id)arg1;
- (void)setAccessoryButtonFont:(id)arg1;
- (void)setAccessorySecondaryButtonBackgroundColor:(id)arg1;
- (void)setAccessorySecondaryButtonColor:(id)arg1;
- (void)setAccessorySecondaryButtonFont:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setIconAnimationPlayCount:(long long)arg1;
- (void)setImageSymbolConfiguration:(id)arg1;
- (void)setImageTintColor:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setMessageTextColor:(id)arg1;
- (void)setPrimaryImageRenderingMode:(long long)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (id)titleFont;
- (id)titleTextColor;

@end
