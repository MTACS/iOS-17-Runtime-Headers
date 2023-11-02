
@interface GKFriendRequestViewController : GKHostedViewController {
    NSString * _chatGUID;
    NSObject<GKFriendRequestViewControllerDelegate> * _delegate;
    NSString * _friendCode;
    NSString * _friendSupportPageURL;
    NSArray * _recipients;
    UIViewController * _requestingViewController;
}

@property (nonatomic, retain) NSString *chatGUID;
@property (nonatomic) NSObject<GKFriendRequestViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSString *friendCode;
@property (nonatomic, retain) NSString *friendSupportPageURL;
@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic) UIViewController *requestingViewController;

+ (void)addFriends:(id)arg1;
+ (void)addFriends:(id)arg1 recipients:(id)arg2;
+ (void)presentAlertControllerOn:(id)arg1 withMessage:(id)arg2 andTitle:(id)arg3;
+ (void)presentFriendRequestOn:(id)arg1 forRecipients:(id)arg2 withFriendCode:(id)arg3 andFriendSupportPageURL:(id)arg4;

- (void).cxx_destruct;
- (id)_presentingViewController;
- (id)chatGUID;
- (id)delegate;
- (id)friendCode;
- (id)friendSupportPageURL;
- (id)init;
- (void)notifyDelegateOnWillFinish;
- (id)recipients;
- (id)requestingViewController;
- (id)serviceSideViewControllerClassName;
- (void)setChatGUID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFriendCode:(id)arg1;
- (void)setFriendSupportPageURL:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setRequestingViewController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
