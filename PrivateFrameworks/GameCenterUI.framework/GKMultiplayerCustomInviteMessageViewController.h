
@interface GKMultiplayerCustomInviteMessageViewController : UIViewController {
    UIVisualEffectView * _backgroundEffectView;
    NSObject<GKMultiplayerCustomInviteMessageViewControllerDelegate> * _delegate;
    UIButton * _doneButton;
    NSString * _message;
    UITextView * _messageTextField;
}

@property (nonatomic, retain) UIVisualEffectView *backgroundEffectView;
@property (nonatomic) NSObject<GKMultiplayerCustomInviteMessageViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIButton *doneButton;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) UITextView *messageTextField;

- (void).cxx_destruct;
- (id)backgroundEffectView;
- (id)delegate;
- (id)doneButton;
- (void)donePressed:(id)arg1;
- (id)message;
- (id)messageTextField;
- (void)setBackgroundEffectView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageTextField:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
