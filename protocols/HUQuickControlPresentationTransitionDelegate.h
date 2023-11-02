
@protocol HUQuickControlPresentationTransitionDelegate <NSObject>

@required

- (double)backgroundCornerRadius;
- (unsigned long long)backgroundDisplayStyle;
- (id)baseIconViewConfiguration;
- (UIView *)createBackgroundBlurView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })iconViewTileFrame;
- (UIFont *)prefixLabelFont;
- (UIColor *)prefixLabelTextColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })prefixLabelTileFrame;
- (NSString *)prefixString;
- (UIFont *)primaryLabelFont;
- (UIColor *)primaryLabelTextColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })primaryLabelTileFrame;
- (NSString *)primaryString;
- (bool)recognizeDoubleClickGesture;
- (NSAttributedString *)secondaryAttributedString;
- (UIFont *)secondaryLabelFont;
- (UIColor *)secondaryLabelTextColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })secondaryLabelTileFrame;
- (NSString *)secondaryString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tileFrame;
- (void)updateUIWithAnimation:(bool)arg1;

@optional

- (NSString *)badgeIconIdentifier;
- (UIColor *)prefixLabelOffTextColor;
- (UIColor *)prefixLabelOnTextColor;
- (UIColor *)primaryLabelOffTextColor;
- (UIColor *)primaryLabelOnTextColor;
- (UIColor *)secondaryLabelOffTextColor;
- (UIColor *)secondaryLabelOnTextColor;

@end
