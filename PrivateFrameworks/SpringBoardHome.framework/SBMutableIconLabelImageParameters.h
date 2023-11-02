
@interface SBMutableIconLabelImageParameters : SBIconLabelImageParameters

@property (getter=isAccessibilityReduceTransparencyEnabled, nonatomic) bool accessibilityReduceTransparencyEnabled;
@property (nonatomic) bool canTighten;
@property (nonatomic) bool canTruncate;
@property (getter=isColorspaceGrayscale, nonatomic) bool colorspaceGrayscale;
@property (nonatomic) bool containsEmoji;
@property (nonatomic, copy) NSString *contentSizeCategory;
@property (nonatomic, retain) UIColor *focusHighlightColor;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } fontLanguageInsets;
@property (nonatomic) long long legibilityStyle;
@property (nonatomic) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic) double scale;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textInsets;

- (id)copy;
- (void)setAccessibilityReduceTransparencyEnabled:(bool)arg1;
- (void)setCanTighten:(bool)arg1;
- (void)setCanTruncate:(bool)arg1;
- (void)setColorspaceGrayscale:(bool)arg1;
- (void)setContainsEmoji:(bool)arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setFocusHighlightColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFontLanguageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLegibilityStyle:(long long)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setScale:(double)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
