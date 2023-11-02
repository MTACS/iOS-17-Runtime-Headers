
@interface MTColorTheme : NSObject {
    UIColor * _backgroundColor;
    bool  _isBackgroundLight;
    UIColor * _primaryTextColor;
    UIColor * _secondaryTextColor;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) bool isBackgroundLight;
@property (nonatomic, retain) UIColor *primaryTextColor;
@property (nonatomic, retain) UIColor *secondaryTextColor;

- (void).cxx_destruct;
- (id)backgroundColor;
- (bool)isBackgroundDark;
- (bool)isBackgroundLight;
- (bool)isEqual:(id)arg1;
- (id)primaryTextColor;
- (id)secondaryTextColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setIsBackgroundLight:(bool)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setSecondaryTextColor:(id)arg1;

@end
