
@interface RemindersUICore.TTRIHashtagButton : UIButton {
    void accessibilityDelegate;
    void focusDelegate;
    void isAddTagButton;
    void isContextMenuTarget;
    void isExcluded;
}

@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, readonly) bool canBecomeFocused;

- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityUserInputLabels;
- (id)accessibilityValue;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityUserInputLabels:(id)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (bool)ttriAccessibilityShouldUseViewHierarchyForFindingScrollParent;

@end
