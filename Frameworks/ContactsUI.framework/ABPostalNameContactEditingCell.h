
@interface ABPostalNameContactEditingCell : CNContactCell <UITextFieldDelegate> {
    UITextField * _editingTextField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cnui_applyContactStyle;
- (void)dealloc;
- (id)firstResponderItem;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setCardGroupItem:(id)arg1;
- (void)textFieldDidChange:(id)arg1;

@end
