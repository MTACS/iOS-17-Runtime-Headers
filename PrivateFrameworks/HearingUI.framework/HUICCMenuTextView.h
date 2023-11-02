
@interface HUICCMenuTextView : UIView <HACCContentModule, UIGestureRecognizerDelegate> {
    CCUIContentModuleDetailTransitioningDelegate * _detailTransitioningDelegate;
    bool  _isLargeText;
    bool  _isSubModule;
    id /* block */  _presentVCBlock;
    HACCStackView * _stackView;
    UITapGestureRecognizer * _tapRecognizer;
    _HUIDarkTextView * _textView;
    HACCCapsuleTitleView * _titleView;
    NSLayoutConstraint * _titleViewHeightLayout;
    <HACCContentModuleDelegate> * delegate;
    unsigned long long  module;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HACCContentModuleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CCUIContentModuleDetailTransitioningDelegate *detailTransitioningDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLargeText;
@property (nonatomic) bool isSubModule;
@property (nonatomic) unsigned long long module;
@property (nonatomic, copy) id /* block */ presentVCBlock;
@property (nonatomic) bool providesOwnSeparator;
@property (nonatomic, retain) HACCStackView *stackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapRecognizer;
@property (nonatomic, retain) _HUIDarkTextView *textView;
@property (nonatomic, retain) HACCCapsuleTitleView *titleView;
@property (nonatomic, retain) NSLayoutConstraint *titleViewHeightLayout;

- (void).cxx_destruct;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_setupTitleView;
- (void)_showMenuViewController;
- (bool)_updateIsSubModule;
- (void)_updateMenuItemsForViewController:(id)arg1;
- (void)_updatePresentedMenuViewControllerIfNecessary;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)contentValue;
- (id)delegate;
- (id)detailTransitioningDelegate;
- (bool)enabled;
- (id)initWithModule:(unsigned long long)arg1 andDelegate:(id)arg2;
- (bool)isAccessibilityElement;
- (bool)isLargeText;
- (bool)isSubModule;
- (unsigned long long)module;
- (id /* block */)presentVCBlock;
- (bool)providesOwnSeparator;
- (void)setDelegate:(id)arg1;
- (void)setDetailTransitioningDelegate:(id)arg1;
- (void)setIsLargeText:(bool)arg1;
- (void)setIsSubModule:(bool)arg1;
- (void)setModule:(unsigned long long)arg1;
- (void)setPresentVCBlock:(id /* block */)arg1;
- (void)setStackView:(id)arg1;
- (void)setTapRecognizer:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setTitleViewHeightLayout:(id)arg1;
- (id)stackView;
- (id)tapRecognizer;
- (id)textView;
- (id)titleView;
- (id)titleViewHeightLayout;
- (void)updateValue;

@end
