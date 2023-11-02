
@protocol PSPasscodeFieldDelegate <NSObject>

@required

- (void)passcodeField:(PSPasscodeField *)arg1 enteredPasscode:(NSString *)arg2;

@optional

- (NSString *)passcodeField:(PSPasscodeField *)arg1 shouldInsertText:(NSString *)arg2;

@end
