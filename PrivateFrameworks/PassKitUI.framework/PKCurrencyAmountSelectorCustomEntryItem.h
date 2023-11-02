
@interface PKCurrencyAmountSelectorCustomEntryItem : NSObject <PKSpendNotificationLimitViewControllerItem, UITextFieldDelegate> {
    PKTextFieldTableViewCell * _cell;
    id /* block */  _editingChangedHandler;
    PKTextfieldTableViewSettingsRowCurrencyFormatter * _formatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ editingChangedHandler;
@property (nonatomic, readonly) long long editingStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cellReuseIdentifier;

- (void).cxx_destruct;
- (void)_textFieldValueChanged:(id)arg1;
- (void)clear;
- (id)decimalNumberValue;
- (id /* block */)editingChangedHandler;
- (long long)editingStyle;
- (void)endEditing;
- (id)initWithCurrencyCode:(id)arg1;
- (void)setEditingChangedHandler:(id /* block */)arg1;
- (bool)shouldHighlight;
- (id)tableViewCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;

@end
