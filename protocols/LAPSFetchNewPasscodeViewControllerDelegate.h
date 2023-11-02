
@protocol LAPSFetchNewPasscodeViewControllerDelegate <NSObject>

@required

- (void)fetchNewPasscodeViewController:(LAPSFetchNewPasscodeViewController *)arg1 verifyPasscode:(LAPSPasscode *)arg2;
- (void)fetchNewPasscodeViewController:(LAPSFetchNewPasscodeViewController *)arg1 verifyPasscode:(LAPSPasscode *)arg2 matchesPasscode:(LAPSPasscode *)arg3;

@end
