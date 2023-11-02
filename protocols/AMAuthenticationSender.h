
@protocol AMAuthenticationSender <NSObject>

@required

- (NSString *)passcode;
- (void)resetForFailedPasscode;
- (void)resetForSuccess;

@end
