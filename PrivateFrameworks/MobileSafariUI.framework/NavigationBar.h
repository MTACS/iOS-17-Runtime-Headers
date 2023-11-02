
@interface NavigationBar : _SFNavigationBar

@property (nonatomic, readonly) UnifiedField *textField;

- (id)newTextField;
- (double)placeholderHorizontalInset;
- (void)setExpanded:(bool)arg1 textFieldSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setTextFieldPlaceHolderColor:(id)arg1;
- (id)textField;

@end
