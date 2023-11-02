
@interface GameCenterUI.FriendRequestComposeViewController : MFMessageComposeViewController <MFMessageComposeViewControllerDelegate> {
    void friendCode;
    void friendSupportPageURL;
    void isFriendCodeCancelled;
    void isMessageSent;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;

@end
