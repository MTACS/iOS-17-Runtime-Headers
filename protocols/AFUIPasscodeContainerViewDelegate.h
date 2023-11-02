
@protocol AFUIPasscodeContainerViewDelegate <NSObject>

@required

- (void)passcodeView:(void *)arg1 animateShowPasscodeWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: UIView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)passcodeView:(UIView *)arg1 attemptUnlockWithPassword:(NSString *)arg2;
- (void)passcodeView:(void *)arg1 hideLockViewWithResult:(void *)arg2 unlockCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: UIView *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@end
