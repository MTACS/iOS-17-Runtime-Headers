
@interface TSKEditableTextFieldCell : UITableViewCell {
    UITextField * mTextField;
}

@property (nonatomic, retain) UITextField *textField;

- (void)beginEditing;
- (void)dealloc;
- (void)endEditing;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setTextField:(id)arg1;
- (id)textField;
- (void)textFieldDidEndEditing:(id)arg1;

@end
