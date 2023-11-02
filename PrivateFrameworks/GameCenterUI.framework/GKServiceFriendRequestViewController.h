
@interface GKServiceFriendRequestViewController : GKServiceViewController <MFMessageComposeViewControllerInternalDelegate> {
    NSString * _chatGUID;
    MFMessageComposeViewController * _composeController;
    NSString * _friendCode;
    NSString * _friendSupportPageURL;
    bool  _messageComposeSent;
    NSArray * _recipients;
}

@property (nonatomic, retain) NSString *chatGUID;
@property (nonatomic, retain) MFMessageComposeViewController *composeController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *friendCode;
@property (nonatomic, retain) NSString *friendSupportPageURL;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool messageComposeSent;
@property (nonatomic, retain) NSArray *recipients;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_useBackdropViewForWindowBackground;
- (id)chatGUID;
- (id)composeController;
- (void)constructPrivateViewController;
- (void)didEndDisplaying;
- (void)displayAlertWithTitle:(id)arg1 andMessage:(id)arg2;
- (id)friendCode;
- (id)friendSupportPageURL;
- (id)init;
- (bool)messageComposeSent;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(id /* block */)arg4;
- (id)recipients;
- (void)setChatGUID:(id)arg1;
- (void)setComposeController:(id)arg1;
- (void)setFriendCode:(id)arg1;
- (void)setFriendSupportPageURL:(id)arg1;
- (void)setInitialState:(id)arg1 withReply:(id /* block */)arg2;
- (void)setMessageComposeSent:(bool)arg1;
- (void)setRecipients:(id)arg1;
- (bool)shouldAnimatePresentationForPrivateViewController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
