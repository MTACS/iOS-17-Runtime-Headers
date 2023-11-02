
@interface AMSUIAccountMessageAppearance : AMSUIAppearance <NSCopying> {
    UIColor * _accessoryButtonColor;
    UIFont * _accessoryButtonFont;
    UIColor * _backgroundColor;
    UIImage * _backgroundImage;
    UIColor * _footerButtonColor;
    UIFont * _footerButtonFont;
    long long  _iconAnimationPlayCount;
    unsigned long long  _imageStyle;
    UIImageSymbolConfiguration * _imageSymbolConfiguration;
    UIColor * _imageTintColor;
    long long  _impressionAnimationStyle;
    UIFont * _messageFont;
    UIColor * _messageTextColor;
    long long  _primaryImageRenderingMode;
    UIFont * _titleFont;
    UIColor * _titleTextColor;
}

@property (nonatomic, retain) UIColor *accessoryButtonColor;
@property (nonatomic, retain) UIFont *accessoryButtonFont;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, retain) UIColor *footerButtonColor;
@property (nonatomic, retain) UIFont *footerButtonFont;
@property (nonatomic) long long iconAnimationPlayCount;
@property (nonatomic) unsigned long long imageStyle;
@property (nonatomic, retain) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (nonatomic, retain) UIColor *imageTintColor;
@property (nonatomic) long long impressionAnimationStyle;
@property (nonatomic, retain) UIFont *messageFont;
@property (nonatomic, retain) UIColor *messageTextColor;
@property (nonatomic) long long primaryImageRenderingMode;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) UIColor *titleTextColor;

- (void).cxx_destruct;
- (long long)_animationStyleWithDictionary:(id)arg1;
- (void)_setImageStyleWithDictionary:(id)arg1;
- (id)accessoryButtonColor;
- (id)accessoryButtonFont;
- (id)backgroundColor;
- (id)backgroundImage;
- (id)footerButtonColor;
- (id)footerButtonFont;
- (long long)iconAnimationPlayCount;
- (unsigned long long)imageStyle;
- (id)imageSymbolConfiguration;
- (id)imageTintColor;
- (long long)impressionAnimationStyle;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)messageFont;
- (id)messageTextColor;
- (long long)primaryImageRenderingMode;
- (void)setAccessoryButtonColor:(id)arg1;
- (void)setAccessoryButtonFont:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setFooterButtonColor:(id)arg1;
- (void)setFooterButtonFont:(id)arg1;
- (void)setIconAnimationPlayCount:(long long)arg1;
- (void)setImageStyle:(unsigned long long)arg1;
- (void)setImageSymbolConfiguration:(id)arg1;
- (void)setImageTintColor:(id)arg1;
- (void)setImpressionAnimationStyle:(long long)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setMessageTextColor:(id)arg1;
- (void)setPrimaryImageRenderingMode:(long long)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (id)titleFont;
- (id)titleTextColor;

@end
