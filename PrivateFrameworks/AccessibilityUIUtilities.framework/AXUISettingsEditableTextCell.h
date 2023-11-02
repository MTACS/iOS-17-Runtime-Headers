
@interface AXUISettingsEditableTextCell : PSTableCell <UITextFieldDelegate> {
    UITextField * _nameTextField;
    bool  _shouldAllowSelection;
    bool  _shouldDisableTextFieldWhenNotEditing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextField *nameTextField;
@property (nonatomic) bool shouldAllowSelection;
@property (nonatomic) bool shouldDisableTextFieldWhenNotEditing;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_accessibilityIgnoreInternalLabels;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)initializeView;
- (void)layoutSubviews;
- (void)markNameTextFieldAccessible;
- (id)nameTextField;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setNameTextField:(id)arg1;
- (void)setSelectionStyle:(long long)arg1;
- (void)setShouldAllowSelection:(bool)arg1;
- (void)setShouldDisableTextFieldWhenNotEditing:(bool)arg1;
- (void)setTextFieldValue:(id)arg1 specifier:(id)arg2;
- (bool)shouldAllowSelection;
- (bool)shouldDisableTextFieldWhenNotEditing;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)textFieldValue:(id)arg1;
- (void)updateText;

@end
