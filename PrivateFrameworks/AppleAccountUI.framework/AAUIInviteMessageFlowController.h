
@interface AAUIInviteMessageFlowController : NSObject <AAUIInviteControllerDelegate> {
    AAMessagesInviteContext * _context;
    <AAUIOBWelcomeControllerViewModelProtocol> * _defaultMessageViewModel;
    <AAUIInviteMessageFlowControllerDelegate> * _delegate;
    unsigned long long  _flow;
    bool  _hideCancel;
    AAUIMessagesInviteConfigurationController * _messageComposer;
    <AAUIOBWelcomeControllerViewModelProtocol> * _messageSentViewModel;
    UINavigationController * _navigationController;
    NSString * _recipientHandle;
    AAUISpinnerManager * _spinnerManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIInviteMessageFlowControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideCancel;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bubbleImageForFlow:(unsigned long long)arg1;
- (void)_cancelMessageInvitationFlow;
- (void)_finishMessageInvitationFlow;
- (void)_hideActivitySpinnerInNavigationBar;
- (void)_invitationWasSent;
- (void)_messageSentSecondaryActionTapped;
- (void)_sendDefaultMessage;
- (void)_showActivitySpinnerInNavigationBar;
- (void)_showDefaultMessageView;
- (void)_showInvitationSent;
- (void)_showMessagesComposeController;
- (id)delegate;
- (bool)hideCancel;
- (id)initWithContext:(id)arg1 flow:(unsigned long long)arg2 navigationController:(id)arg3 defaultMessageViewModel:(id)arg4 messageSentViewModel:(id)arg5;
- (void)inviteController:(id)arg1 didFinishWithStatus:(unsigned long long)arg2 recipients:(id)arg3 userInfo:(id)arg4 error:(id)arg5;
- (id)navigationController;
- (void)setDelegate:(id)arg1;
- (void)setHideCancel:(bool)arg1;
- (void)setNavigationController:(id)arg1;
- (void)start;

@end
