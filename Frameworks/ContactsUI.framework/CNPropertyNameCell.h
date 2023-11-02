
@interface CNPropertyNameCell : CNContactCell {
    <CNPropertyCellDelegate> * _delegate;
    UIResponder * _firstResponderItem;
    UITextField * _textField;
}

@property (nonatomic) <CNPropertyCellDelegate> *delegate;
@property (nonatomic, readonly) UIResponder *firstResponderItem;
@property (nonatomic, retain) CNPropertyGroupItem *propertyItem;
@property (nonatomic, readonly) UITextField *textField;

+ (bool)shouldIndentWhileEditing;

- (void).cxx_destruct;
- (id)constantConstraints;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)displayStringForValue:(id)arg1;
- (id)firstResponderItem;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)minCellHeight;
- (id)placeholderString;
- (id)propertyItem;
- (void)setBackgroundColor:(id)arg1;
- (void)setCardGroupItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPropertyItem:(id)arg1;
- (id)textField;
- (void)textFieldChanged:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
