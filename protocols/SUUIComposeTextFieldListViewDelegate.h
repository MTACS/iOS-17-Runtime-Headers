
@protocol SUUIComposeTextFieldListViewDelegate <NSObject>

@required

- (long long)numberOfColumnsInTextFieldList:(SUUIComposeTextFieldListView *)arg1;
- (long long)numberOfFieldsInTextFieldList:(SUUIComposeTextFieldListView *)arg1;
- (SUUIComposeTextFieldConfiguration *)textFieldList:(SUUIComposeTextFieldListView *)arg1 configurationForFieldAtIndex:(unsigned long long)arg2;

@optional

- (void)textFieldListValidityDidChange:(SUUIComposeTextFieldListView *)arg1;
- (void)textFieldListValuesDidChange:(SUUIComposeTextFieldListView *)arg1;

@end
