
@protocol _TVRCRMSDeviceKeyboardImplDelegate <NSObject>

@required

- (void)keyboardImpl:(_TVRCRMSDeviceKeyboardImpl *)arg1 updatedText:(NSString *)arg2;
- (void)keyboardImplRequestsSendingReturnKey:(_TVRCRMSDeviceKeyboardImpl *)arg1;

@end
