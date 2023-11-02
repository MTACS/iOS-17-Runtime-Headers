
@protocol PREditingSceneSettings <PRSceneSettings>

@required

- (bool)pr_areComplicationsDisallowed;
- (bool)pr_areControlsHidden;
- (long long)pr_deviceOrientation;
- (long long)pr_editingAcceptButtonType;
- (long long)pr_editingContext;
- (long long)pr_editingVariant;
- (long long)pr_focusedComplicationElement;
- (bool)pr_isCoveredByModalPresentation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pr_leadingTopButtonFrame;
- (NSDate *)pr_overrideDate;
- (NSString *)pr_titleString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pr_trailingTopButtonFrame;
- (bool)pr_usesEditingLayout;

@end
