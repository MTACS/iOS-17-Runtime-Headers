
@interface MKInfoCardThemeManager : NSObject <MKInfoCardTheme> {
    NSDictionary * _colors;
    unsigned long long  _themeType;
    bool  _themeWasExplicitySet;
    id /* block */  _tintColorProvider;
    bool  _useSmallFont;
}

@property (nonatomic, readonly) UIColor *buttonHighlightedColor;
@property (nonatomic, readonly) UIColor *buttonNormalColor;
@property (nonatomic, readonly) UIColor *cardBackgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIColor *disabledActionRowBackgroundColor;
@property (nonatomic, readonly) UIColor *disabledActionRowTextColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *headerPrimaryButtonHighlightedColor;
@property (nonatomic, readonly) UIColor *headerPrimaryButtonNormalColor;
@property (nonatomic, readonly) UIColor *highlightedTintColor;
@property (nonatomic, readonly) bool isDarkTheme;
@property (nonatomic, readonly) NSString *javaScriptName;
@property (nonatomic, readonly) UIColor *lightTextColor;
@property (nonatomic, readonly) UIColor *normalActionRowBackgroundColor;
@property (nonatomic, readonly) UIColor *normalActionRowBackgroundPressedColor;
@property (nonatomic, readonly) UIColor *normalBackgroundColor;
@property (nonatomic, readonly) UIColor *ratingBarBackgroundColor;
@property (nonatomic, readonly) UIColor *ratingBarEndColor;
@property (nonatomic, readonly) UIColor *ratingBarStartColor;
@property (nonatomic, readonly) UIColor *rowColor;
@property (nonatomic, readonly) UIColor *selectedRowColor;
@property (nonatomic, readonly) UIColor *separatorLineColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *tertiaryTextColor;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) unsigned long long themeType;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) UIColor *transitChevronBackgroundColor;
@property (nonatomic, readonly) UIColor *transitDelayedTextColor;
@property (nonatomic, readonly) UIColor *transitIncidentBackgroundColor;
@property (nonatomic, readonly) UIColor *transitOntimeTextColor;
@property (nonatomic) bool useSmallFont;

+ (id)currentTheme;
+ (void)setTheme:(unsigned long long)arg1;
+ (void)setTintColorProvider:(id /* block */)arg1;
+ (unsigned long long)themeType;
+ (id)themeWithThemeType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (unsigned long long)_currentSystemTheme;
- (id)_initWithThemeType:(unsigned long long)arg1;
- (bool)_isInSpotlightContext;
- (void)_setTheme:(unsigned long long)arg1;
- (void)_setTintColorProvider:(id /* block */)arg1;
- (id)buttonHighlightedColor;
- (id)buttonNormalColor;
- (id)cardBackgroundColor;
- (id)disabledActionRowBackgroundColor;
- (id)disabledActionRowTextColor;
- (id)headerPrimaryButtonHighlightedColor;
- (id)headerPrimaryButtonNormalColor;
- (id)highlightedTintColor;
- (id)init;
- (bool)isDarkTheme;
- (id)javaScriptName;
- (id)lightTextColor;
- (id)normalActionRowBackgroundColor;
- (id)normalActionRowBackgroundPressedColor;
- (id)normalBackgroundColor;
- (id)ratingBarBackgroundColor;
- (id)ratingBarEndColor;
- (id)ratingBarStartColor;
- (id)rowColor;
- (id)selectedRowColor;
- (id)separatorLineColor;
- (void)setUseSmallFont:(bool)arg1;
- (id)tertiaryTextColor;
- (id)textColor;
- (unsigned long long)themeType;
- (id)tintColor;
- (id)transitChevronBackgroundColor;
- (id)transitDelayedTextColor;
- (id)transitIncidentBackgroundColor;
- (id)transitOntimeTextColor;
- (bool)useSmallFont;

@end
