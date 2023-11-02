
@interface UIKBFocusVCView : UIView {
    bool  _isEligibleForFocusWithZeroAlpha;
}

@property (nonatomic) bool isEligibleForFocusWithZeroAlpha;

- (bool)_isEligibleForFocusGivenAlpha;
- (bool)isEligibleForFocusWithZeroAlpha;
- (id)preferredFocusedView;
- (void)setIsEligibleForFocusWithZeroAlpha:(bool)arg1;

@end
