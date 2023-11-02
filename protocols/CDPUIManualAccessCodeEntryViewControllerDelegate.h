
@protocol CDPUIManualAccessCodeEntryViewControllerDelegate

@required

- (bool)manualAccessCodeEntry:(CDPUIManualAccessCodeEntryViewController *)arg1 shouldFinishWithAccessCode:(NSString *)arg2;
- (void)manualAccessCodeEntryDidCancel:(CDPUIManualAccessCodeEntryViewController *)arg1;

@end
