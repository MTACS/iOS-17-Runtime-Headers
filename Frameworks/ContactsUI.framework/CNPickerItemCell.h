
@interface CNPickerItemCell : UITableViewCell {
    bool  _placeholder;
    UITextField * _textField;
}

@property (getter=isPlaceholder, nonatomic) bool placeholder;
@property (nonatomic, retain) UITextField *textField;

- (void).cxx_destruct;
- (void)beginEditing;
- (void)endEditing;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isPlaceholder;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setPlaceholder:(bool)arg1;
- (void)setTextField:(id)arg1;
- (void)setTextFieldHidden:(bool)arg1;
- (id)textField;

@end
