
@protocol SBUIPhoneUnlockWithWatchControllerObserver <NSObject>

@required

- (void)phoneUnlockWithWatchControllerAttemptFailed:(SBUIPhoneUnlockWithWatchController *)arg1 withError:(NSError *)arg2;
- (void)phoneUnlockWithWatchControllerAttemptSucceeded:(SBUIPhoneUnlockWithWatchController *)arg1;

@end
