
@interface FAActivityViewController : UIActivityViewController <MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerInternalDelegate, UIActivityViewControllerAirDropDelegate> {
    <FAActivityViewControllerDelegate> * _delegate;
    bool  _didCompleteAirdropTransfer;
    FAInviteRecipientEvaluator * _inviteRecipientEvaluator;
    <UIActivityItemSource> * _itemSource;
    NSArray * _recipientAddresses;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FAActivityViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didCompleteAirdropTransfer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *recipientAddresses;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_parseRecipientAddresses:(id)arg1;
- (void)_prepareActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)activityViewControllerDidFinishAirdropTransfer:(id)arg1;
- (id)delegate;
- (bool)didCompleteAirdropTransfer;
- (id)initWithItemSource:(id)arg1 eventType:(id)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)mailComposeController:(id)arg1 shouldSendMail:(id)arg2 toRecipients:(id)arg3 completion:(id /* block */)arg4;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(id /* block */)arg4;
- (id)recipientAddresses;
- (void)setDelegate:(id)arg1;
- (void)setDidCompleteAirdropTransfer:(bool)arg1;
- (void)setRecipientAddresses:(id)arg1;

@end
