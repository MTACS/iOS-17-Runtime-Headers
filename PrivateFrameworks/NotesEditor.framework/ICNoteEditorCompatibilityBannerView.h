
@interface ICNoteEditorCompatibilityBannerView : UIView {
    double  _availableWidth;
    ICLearnMoreTextView * _learnMoreTextView;
}

@property (nonatomic) double availableWidth;
@property (nonatomic, retain) ICLearnMoreTextView *learnMoreTextView;
@property (nonatomic, readonly) double preferredHeight;

+ (void)checkShouldShowCompatibilityBannerViewForNote:(id)arg1 parentViewController:(id)arg2 completion:(id /* block */)arg3;
+ (id)compatibilityAttributedString;

- (void).cxx_destruct;
- (bool)accessibilityActivate;
- (id)accessibilityContainer;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityUserInputLabels;
- (double)availableWidth;
- (void)contentSizeCategoryDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 parentViewController:(id)arg2;
- (bool)isAccessibilityElement;
- (id)learnMoreTextView;
- (double)preferredHeight;
- (void)setAvailableWidth:(double)arg1;
- (void)setLearnMoreTextView:(id)arg1;
- (void)updateConstraints;

@end
