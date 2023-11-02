
@protocol LAPSFetchOldPasscodeViewControllerDelegate <NSObject>

@required

- (NSString *)fetchOldPasscodeViewController:(LAPSFetchOldPasscodeViewController *)arg1 backoffMessageForTimeout:(long long)arg2;
- (void)fetchOldPasscodeViewController:(LAPSFetchOldPasscodeViewController *)arg1 verifyPasscode:(LAPSPasscode *)arg2;

@end
