
@protocol AAUISignOutControllerDelegate <UINavigationControllerDelegate>

@required

- (void)signOutController:(AAUISignOutController *)arg1 didCompleteWithSuccess:(bool)arg2 error:(NSError *)arg3;
- (void)signOutControllerDidCancel:(AAUISignOutController *)arg1;

@end
