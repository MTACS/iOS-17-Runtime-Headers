
@interface WDProfileEditableTableViewCell : WDProfileTableViewCell

+ (double)notEditingTrailingEdgeMargin;

- (void)_textFieldDidChange:(id)arg1;
- (bool)becomeFirstResponder;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;

@end
