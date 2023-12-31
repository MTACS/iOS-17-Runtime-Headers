
@interface _SFBookmarkTextEntryTableViewCell : UITableViewCell {
    NSLayoutConstraint * _leadingConstraint;
    UITextField * _textField;
}

@property (nonatomic, readonly) UITextField *editableTextField;

- (void).cxx_destruct;
- (id)editableTextField;
- (id)initWithText:(id)arg1 autocapitalizationType:(long long)arg2 autocorrectionType:(long long)arg3;
- (void)layoutMarginsDidChange;
- (void)safeAreaInsetsDidChange;
- (void)setSeparatorInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)updateConstraints;

@end
