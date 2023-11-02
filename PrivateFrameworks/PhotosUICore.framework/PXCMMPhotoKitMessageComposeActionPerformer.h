
@interface PXCMMPhotoKitMessageComposeActionPerformer : PXCMMShowMessageComposeActionPerformer <MFMessageComposeViewControllerDelegate> {
    MFMessageComposeViewController * _messageComposeViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)performUserInteractionTask;

@end
