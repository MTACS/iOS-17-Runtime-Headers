
@interface ICLearnMoreTextView : UITextView {
    NSString * _helpTopic;
    bool  _isShowingLearnMore;
    UIViewController * _parentViewController;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, copy) NSString *helpTopic;
@property (nonatomic) bool isShowingLearnMore;
@property (nonatomic) UIViewController *parentViewController;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (bool)_accessibilityHasTextOperations;
- (bool)accessibilityActivate;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)attributedString:(id)arg1 withColor:(id)arg2 font:(id)arg3;
- (void)awakeFromNib;
- (void)dealloc;
- (void)didTapLearnMore;
- (id)helpTopic;
- (bool)isAccessibilityElement;
- (bool)isShowingLearnMore;
- (id)parentViewController;
- (void)resetTextView;
- (void)setAttributedText:(id)arg1 addLearnMore:(bool)arg2;
- (void)setAttributedText:(id)arg1 font:(id)arg2 lineSpacing:(double)arg3 addLearnMore:(bool)arg4;
- (void)setHelpTopic:(id)arg1;
- (void)setIsShowingLearnMore:(bool)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setText:(id)arg1 font:(id)arg2 color:(id)arg3 lineSpacing:(double)arg4 addLearnMore:(bool)arg5;
- (void)sizeToFitWidthUsingHeightConstraint:(id)arg1;
- (void)tapGesture:(id)arg1;
- (id)tapGestureRecognizer;
- (void)updateForAccessibilityDarkerSystemColors;

@end
