
@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {
    UIColor * _arrowBackgroundColor;
    unsigned long long  _arrowDirection;
    double  _arrowOffset;
    long long  _backgroundStyle;
    UIColor * _contentBlendingColor;
    bool  _debugMode;
    UIColor * _popoverBackgroundColor;
    bool  useShortMode;
    UIView * viewToMaskWhenContentExtendsOverArrow;
}

@property (nonatomic, copy) UIColor *arrowBackgroundColor;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic, readonly) UIColor *contentBlendingColor;
@property (getter=isDebugModeEnabled, nonatomic) bool debugModeEnabled;
@property (nonatomic, copy) UIColor *popoverBackgroundColor;
@property (nonatomic) bool useShortMode;
@property (nonatomic) UIView *viewToMaskWhenContentExtendsOverArrow;

+ (double)arrowHeight;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentViewInsets;
+ (Class)legacyChromeViewClass;
+ (Class)standardChromeViewClass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentViewFrame;
- (long long)_resolvedBackgroundStyle;
- (bool)_shouldUseEqualContentInsetsOnAllSides;
- (void)_updateArrowImages;
- (id)arrowBackgroundColor;
- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (long long)backgroundStyle;
- (id)contentBlendingColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDebugModeEnabled;
- (bool)isPinned;
- (bool)isRightArrowPinnedToBottom;
- (bool)isRightArrowPinnedToTop;
- (double)maxNonPinnedOffset;
- (double)minNonPinnedOffset;
- (id)popoverBackgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsForContentView;
- (void)setArrowBackgroundColor:(id)arg1;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowOffset:(double)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1 animated:(bool)arg2;
- (void)setDebugModeEnabled:(bool)arg1;
- (void)setPopoverBackgroundColor:(id)arg1;
- (void)setUseShortMode:(bool)arg1;
- (void)setViewToMaskWhenContentExtendsOverArrow:(id)arg1;
- (bool)useShortMode;
- (bool)usesImagesForShapeMasking;
- (id)viewToMaskWhenContentExtendsOverArrow;
- (bool)wouldPinForOffset:(double)arg1;

@end
