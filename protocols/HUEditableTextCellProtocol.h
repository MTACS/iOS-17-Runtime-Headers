
@protocol HUEditableTextCellProtocol <NSObject>

@required

- (UITextField *)textField;

@optional

- (bool)shouldOverrideDisabledState;

@end