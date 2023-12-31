
@protocol HUItemTextEditingController <NSObject>

@required

- (NSString *)currentTextForTextField:(UITextField *)arg1 item:(HFItem *)arg2;
- (NSString *)defaultTextForTextField:(UITextField *)arg1 item:(HFItem *)arg2;
- (NSString *)placeholderTextForTextField:(UITextField *)arg1 item:(HFItem *)arg2;
- (bool)shouldManageTextFieldForItem:(HFItem *)arg1;
- (void)textDidChange:(NSString *)arg1 forTextField:(UITextField *)arg2 item:(HFItem *)arg3;
- (void)textFieldDidBeginEditing:(UITextField *)arg1 item:(HFItem *)arg2;
- (void)textFieldDidEndEditing:(UITextField *)arg1 item:(HFItem *)arg2;
- (UITextField *)textFieldForVisibleItem:(HFItem *)arg1;

@end
