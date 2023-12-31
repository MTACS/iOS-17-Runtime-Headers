
@protocol SKUIComposeTextFieldListViewDelegate <NSObject>

@required

- (long long)numberOfColumnsInTextFieldList:(SKUIComposeTextFieldListView *)arg1;
- (long long)numberOfFieldsInTextFieldList:(SKUIComposeTextFieldListView *)arg1;
- (SKUIComposeTextFieldConfiguration *)textFieldList:(SKUIComposeTextFieldListView *)arg1 configurationForFieldAtIndex:(unsigned long long)arg2;

@optional

- (void)textFieldListValidityDidChange:(SKUIComposeTextFieldListView *)arg1;
- (void)textFieldListValuesDidChange:(SKUIComposeTextFieldListView *)arg1;

@end
