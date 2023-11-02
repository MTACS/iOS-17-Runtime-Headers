
@interface _UIFindNavigatorViewLayout : UIView {
    long long  _assistantBarStyle;
    UIButton * _doneButton;
    UIButton * _nextResultButton;
    UIButton * _previousResultButton;
    UIButton * _replaceButton;
    bool  _replaceFieldVisible;
    UIView * _replaceTextField;
    UIView * _searchTextField;
    bool  _usesAssistantBarHeight;
    bool  _usesNextAndPreviousArrows;
    bool  _usesSymbolForDoneButton;
}

@property (nonatomic) long long assistantBarStyle;
@property (nonatomic, retain) UIButton *doneButton;
@property (nonatomic, retain) UIButton *nextResultButton;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic, readonly) double preferredCornerRadius;
@property (nonatomic, readonly) double preferredHorizontalPadding;
@property (nonatomic, readonly) NSString *preferredMaximumContentSizeCategory;
@property (nonatomic, readonly) UIColor *preferredOpaqueBackgroundColor;
@property (nonatomic, readonly) UIImageSymbolConfiguration *preferredSymbolConfigurationForImageForTextFields;
@property (nonatomic, readonly) UIFont *preferredTextFieldFont;
@property (nonatomic, readonly) double preferredVerticalPadding;
@property (nonatomic, retain) UIButton *previousResultButton;
@property (nonatomic, retain) UIButton *replaceButton;
@property (nonatomic) bool replaceFieldVisible;
@property (nonatomic, retain) UIView *replaceTextField;
@property (nonatomic, retain) UIView *searchTextField;
@property (nonatomic, readonly) bool showsReplaceInOptionsMenu;
@property (nonatomic) bool usesAssistantBarHeight;
@property (nonatomic, readonly) bool usesNextAndPreviousArrows;
@property (nonatomic, readonly) bool usesSymbolForDoneButton;

- (void).cxx_destruct;
- (void)_setAndActivateConstraints;
- (void)addMaterialToViewIfNeeded:(id)arg1;
- (void)applyStyleToFieldIfNeeded:(id)arg1;
- (long long)assistantBarStyle;
- (id)commonButtonConfig:(id /* block */)arg1;
- (id)commonButtonConfigWithImageName:(id)arg1 isAccessory:(bool)arg2;
- (id)commonButtonConfigWithTitle:(id)arg1;
- (id)doneButton;
- (bool)isEqual:(id)arg1;
- (id)nextResultButton;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (double)preferredCornerRadius;
- (double)preferredHorizontalPadding;
- (id)preferredMaximumContentSizeCategory;
- (id)preferredOpaqueBackgroundColor;
- (id)preferredSymbolConfigurationForImageForTextFields;
- (id)preferredTextFieldFont;
- (double)preferredVerticalPadding;
- (void)prepareForLayout;
- (id)previousResultButton;
- (id)replaceButton;
- (bool)replaceFieldVisible;
- (id)replaceTextField;
- (id)searchTextField;
- (void)setAssistantBarStyle:(long long)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setNextResultButton:(id)arg1;
- (void)setPreviousResultButton:(id)arg1;
- (void)setReplaceButton:(id)arg1;
- (void)setReplaceFieldVisible:(bool)arg1;
- (void)setReplaceTextField:(id)arg1;
- (void)setSearchTextField:(id)arg1;
- (void)setUsesAssistantBarHeight:(bool)arg1;
- (bool)showsReplaceInOptionsMenu;
- (bool)usesAssistantBarHeight;
- (bool)usesNextAndPreviousArrows;
- (bool)usesSymbolForDoneButton;

@end
