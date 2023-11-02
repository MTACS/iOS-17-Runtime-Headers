
@interface MFMailComposeViewController : UINavigationController <_UIRemoteViewControllerContaining> {
    bool  _didChangeStatusBarStyle;
    id  _internal;
    long long  _savedStatusBarStyle;
    id /* block */  _setupAnimationBlock;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MFMailComposeViewControllerDelegate> *mailComposeDelegate;
@property (readonly) Class superclass;

+ (bool)_canSendMailInNewScene;
+ (bool)canSendMail;
+ (bool)canSendMailSourceAccountManagement:(int)arg1;
+ (bool)hasAutosavedMessageWithIdentifier:(id)arg1;
+ (bool)isMailDropConfigured;
+ (id)log;
+ (unsigned long long)maximumAttachmentSize;
+ (void)removeAutosavedMessageWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)UTITypes;
- (void)__viewControllerWillBePresented:(bool)arg1;
- (void)_addAttachmentDataItemProvider:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 forContentVariation:(id)arg4;
- (id)_addAttachmentItemProvider:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)_addAttachmentWithFileURL:(id)arg1 mimeType:(id)arg2;
- (id)_addContentVariationWithName:(id)arg1;
- (id)_containedRemoteViewController;
- (id)_impl;
- (id)_internalViewController;
- (void)_presentComposeInNewWindowWithCompletion:(id /* block */)arg1;
- (void)_setCKShare:(id)arg1 setupContainerInfo:(id)arg2 permissionType:(long long)arg3 allowOthersToInvite:(bool)arg4;
- (void)_setDefaultContentVariation:(id)arg1;
- (void)_setMessageBody:(id)arg1 isHTML:(bool)arg2 forContentVariation:(id)arg3;
- (id)_validEmailAddressesFromArray:(id)arg1;
- (void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)addSetupAnimationBlock:(id /* block */)arg1;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)autosaveWithHandler:(id /* block */)arg1;
- (id)cloudPhotoIDs;
- (id)contentText;
- (id)contentURLs;
- (void)currentAttachmentLimitWithHandler:(id /* block */)arg1;
- (void)finalizeCompositionValues;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)mailComposeDelegate;
- (id)photoIDs;
- (long long)preferredStatusBarStyle;
- (void)recoverAutosavedMessageWithIdentifier:(id)arg1;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)setAutorotationDelegate:(id)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setCloudPhotoIDs:(id)arg1;
- (void)setContentText:(id)arg1;
- (void)setContentURLs:(id)arg1;
- (void)setContentVisible:(bool)arg1;
- (void)setHideMyEmailFrom:(id)arg1;
- (void)setKeyboardVisible:(bool)arg1;
- (void)setMailComposeDelegate:(id)arg1;
- (void)setMessageBody:(id)arg1 isHTML:(bool)arg2;
- (void)setPhotoIDs:(id)arg1;
- (void)setPreferredSendingEmailAddress:(id)arg1;
- (void)setShareSheetSessionID:(id)arg1;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (void)setUTITypes:(id)arg1;
- (id)shareSheetSessionID;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
