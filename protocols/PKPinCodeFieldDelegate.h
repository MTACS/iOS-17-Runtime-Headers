
@protocol PKPinCodeFieldDelegate <NSObject>

@required

- (void)pinCodeTextFieldWasUpdated:(PKPinCodeField *)arg1 isComplete:(bool)arg2;

@end
