
@interface SBIconLabelImageParametersBuilder : NSObject {
    bool  _accessibilityReduceTransparencyEnabled;
    NSString * _contentSizeCategory;
    UIColor * _focusHighlightColor;
    UIFont * _font;
    bool  _hasSetTextInsets;
    SBIcon * _icon;
    NSString * _iconLocation;
    SBIconView * _iconView;
    Class  _iconViewClass;
    long long  _labelAccessoryType;
    _UILegibilitySettings * _legibilitySettings;
    <SBIconListLayoutProvider> * _listLayoutProvider;
    NSString * _overrideText;
    double  _scale;
    NSString * _text;
    UIColor * _textColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textInsets;
}

@property (getter=isAccessibilityReduceTransparencyEnabled, nonatomic) bool accessibilityReduceTransparencyEnabled;
@property (nonatomic, copy) NSString *contentSizeCategory;
@property (nonatomic, retain) UIColor *focusHighlightColor;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) SBIcon *icon;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } iconImageSize;
@property (nonatomic, readonly) NSString *iconLocation;
@property (nonatomic, retain) SBIconView *iconView;
@property (nonatomic, retain) Class iconViewClass;
@property (nonatomic) long long labelAccessoryType;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) <SBIconListLayoutProvider> *listLayoutProvider;
@property (nonatomic, retain) NSString *overrideText;
@property (nonatomic) double scale;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textInsets;

+ (long long)_fontSizeParameterForContentSizeCategory:(id)arg1;
+ (double)_normalFontSizeForSizeParameter:(long long)arg1;
+ (id)defaultFontForContentSizeCategory:(id)arg1 languageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetsForFont:(id)arg1;

- (void).cxx_destruct;
- (bool)_canTightenLabel;
- (bool)_canTruncateLabel;
- (id)_fontWithLanguageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg1;
- (bool)_hasValidInputs;
- (struct CGSize { double x1; double x2; })_maxSize;
- (id)buildParameters;
- (id)contentSizeCategory;
- (id)focusHighlightColor;
- (id)font;
- (id)icon;
- (struct CGSize { double x1; double x2; })iconImageSize;
- (id)iconLocation;
- (id)iconView;
- (Class)iconViewClass;
- (id)init;
- (bool)isAccessibilityReduceTransparencyEnabled;
- (long long)labelAccessoryType;
- (id)legibilitySettings;
- (id)listLayout;
- (id)listLayoutProvider;
- (id)overrideText;
- (double)scale;
- (void)setAccessibilityReduceTransparencyEnabled:(bool)arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setFocusHighlightColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIcon:(id)arg1 forLocation:(id)arg2;
- (void)setIconView:(id)arg1;
- (void)setIconViewClass:(Class)arg1;
- (void)setLabelAccessoryType:(long long)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setListLayoutProvider:(id)arg1;
- (void)setOverrideText:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)text;
- (id)textColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textInsets;

@end
