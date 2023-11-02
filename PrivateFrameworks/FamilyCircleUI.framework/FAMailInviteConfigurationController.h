
@interface FAMailInviteConfigurationController : NSObject <FAInviteConfigurationController, MFMailComposeViewControllerDelegate> {
    FAInviteContext * _context;
    <FAInviteControllerDelegate> * _delegate;
    NSString * _familySuggestionEmailAddress;
    FAInviteRecipientEvaluator * _inviteRecipientEvaluator;
    LPLinkMetadata * _linkMetadata;
    MFMailComposeViewController * _mailComposeViewController;
    UIViewController * _presentationContext;
    NSArray * _recipientAddresses;
}

@property (nonatomic, readonly) FAInviteContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FAInviteControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isAvailable;

- (void).cxx_destruct;
- (id)_mailComposeViewController;
- (void)_presentInviteControllerWithCompletion:(id /* block */)arg1;
- (id)context;
- (id)delegate;
- (id)initWithInviteContext:(id)arg1 presentingController:(id)arg2 email:(id)arg3;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)mailComposeController:(id)arg1 shouldSendMail:(id)arg2 toRecipients:(id)arg3 completion:(id /* block */)arg4;
- (void)presentWhenReadyWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
