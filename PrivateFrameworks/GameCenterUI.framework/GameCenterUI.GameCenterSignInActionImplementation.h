
@interface GameCenterUI.GameCenterSignInActionImplementation : NSObject <AAUISignInControllerDelegate> {
    void currentActionOutcome;
    void signInViewController;
    void viewController;
}

- (void).cxx_destruct;
- (id)init;
- (void)signInController:(id)arg1 didCompleteWithSuccess:(bool)arg2 error:(id)arg3;
- (void)signInControllerDidCancel:(id)arg1;

@end
