
@protocol DBLockoutControllerDelegate <NSObject>

@required

- (void)lockOutController:(DBLockOutController *)arg1 didChangeFromLockoutMode:(long long)arg2 toLockOutMode:(long long)arg3 animated:(bool)arg4 takeScreen:(bool)arg5;

@end
