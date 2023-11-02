
@interface FAShareSheetInviteConfigurationController : NSObject <FAActivityViewControllerDelegate, FAInviteConfigurationController, UIActivityItemSource> {
    id /* block */  _activityControllerCompletionHandler;
    bool  _alwaysNotifyServer;
    FAInviteContext * _context;
    <FAInviteControllerDelegate> * _delegate;
    FAInviteLinkMetadata * _linkMetadata;
    UIViewController * _presentationContext;
    NSArray * _recipientAddresses;
}

@property (nonatomic) bool alwaysNotifyServer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FAInviteControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_parameterForActivityType:(id)arg1;
- (void)_presentInviteControllerWithCompletion:(id /* block */)arg1;
- (void)activityViewController:(id)arg1 didCompleteActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (void)activityViewController:(id)arg1 willStartAsyncActivity:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (bool)alwaysNotifyServer;
- (id)delegate;
- (id)initWithInviteContext:(id)arg1 presentingController:(id)arg2;
- (id)linkMetadataForActivityViewController:(id)arg1;
- (void)presentWhenReadyWithCompletion:(id /* block */)arg1;
- (void)setAlwaysNotifyServer:(bool)arg1;
- (void)setDelegate:(id)arg1;

@end
