
@interface PXSharedLibraryComposeMessageActionPerformer : PXActionPerformer <MFMessageComposeViewControllerDelegate> {
    NSString * _displayName;
    NSURL * _invitationURL;
    MFMessageComposeViewController * _messageComposeViewController;
    NSArray * _recipients;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)performActionWithInvitationURL:(id)arg1 originatorDisplayName:(id)arg2 recipients:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)performUserInteractionTask;

@end
