
@protocol MFAccountValidatorDelegate <NSObject>

@required

- (void)accountValidator:(MFAccountValidator *)arg1 finishedValidationOfAccount:(MFAccount *)arg2 usedSSL:(bool)arg3;

@end
