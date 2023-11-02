
@interface SKUIGiftTheme : NSObject <NSCopying> {
    UIColor * _backgroundColor;
    UIColor * _bodyTextColor;
    UIImage * _headerImage;
    NSURL * _headerImageURL;
    UIColor * _primaryTextColor;
    long long  _themeIdentifier;
    NSString * _themeName;
}

@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, copy) UIColor *bodyTextColor;
@property (nonatomic, retain) UIImage *headerImage;
@property (nonatomic, copy) NSURL *headerImageURL;
@property (nonatomic, copy) UIColor *primaryTextColor;
@property (nonatomic) long long themeIdentifier;
@property (nonatomic, copy) NSString *themeName;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)bodyTextColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)headerImage;
- (id)headerImageURL;
- (id)initWithThemeDictionary:(id)arg1;
- (id)primaryTextColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setBodyTextColor:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)setHeaderImageURL:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setThemeIdentifier:(long long)arg1;
- (void)setThemeName:(id)arg1;
- (long long)themeIdentifier;
- (id)themeName;

@end
