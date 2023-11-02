
@interface AAUIMessagesInviteConfigurationController : NSObject <AAUIInviteConfigurationController, AAUIOBWelcomeControllerDelegate, MFMessageComposeViewControllerInternalDelegate> {
    AAMessagesInviteContext * _context;
    <AAUIInviteControllerDelegate> * _delegate;
    unsigned long long  _flow;
    LPLinkMetadata * _linkMetadata;
    MFMessageComposeViewController * _messageComposeViewController;
    UIViewController * _presentingViewController;
    NSArray * _recipientAddresses;
}

@property (nonatomic, readonly) AAMessagesInviteContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIInviteControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isAvailable;

- (void).cxx_destruct;
- (id)_bubbleImageForFlow:(unsigned long long)arg1;
- (id)_messageComposeViewController;
- (void)_presentInviteControllerWithCompletion:(id /* block */)arg1;
- (id)context;
- (id)delegate;
- (id)initWithInviteContext:(id)arg1 flow:(unsigned long long)arg2 presentingController:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(id /* block */)arg4;
- (void)presentWhenReadyWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
