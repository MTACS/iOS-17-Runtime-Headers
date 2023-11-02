
@protocol CKSMSComposeViewServiceProtocol <NSObject>

@required

- (void)configureForDeviceValidation;
- (void)disableCameraAttachments;
- (void)forceCancelComposition;
- (void)forceMMS;
- (void)insertAttachmentWithURL:(NSURL *)arg1 andDescription:(NSString *)arg2;
- (void)insertCKShareForCollaboration:(CKShare *)arg1 containerSetupInfo:(CKContainerSetupInfo *)arg2 collaborationShareOptions:(_SWCollaborationShareOptions *)arg3 isCollaboration:(bool)arg4;
- (void)insertCKShareForCollaboration:(void *)arg1 containerSetupInfo:(void *)arg2 collaborationShareOptions:(void *)arg3 isCollaboration:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: CKShare *, CKContainerSetupInfo *, _SWCollaborationShareOptions *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)insertData:(NSData *)arg1 MIMEType:(NSString *)arg2 exportedFilename:(NSString *)arg3;
- (void)insertFileURLForCollaboration:(NSURL *)arg1 collaborationShareOptions:(_SWCollaborationShareOptions *)arg2 metadata:(_SWCollaborationMetadata *)arg3 sendAsCopyURL:(NSURL *)arg4 isCollaboration:(bool)arg5;
- (void)insertFileURLForCollaboration:(void *)arg1 collaborationShareOptions:(void *)arg2 metadata:(void *)arg3 sendAsCopyURL:(void *)arg4 isCollaboration:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 11: NSURL *, _SWCollaborationShareOptions *, _SWCollaborationMetadata *, NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)insertFilename:(NSString *)arg1 MIMEType:(NSString *)arg2 exportedFilename:(NSString *)arg3 options:(NSDictionary *)arg4;
- (void)insertGroupActivity:(TUConversationActivity *)arg1;
- (void)insertRemoteItemForSending:(CKRemoteItemForSending *)arg1;
- (void)insertRemoteItemForSendingAndCalculateEntryViewFrame:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CKRemoteItemForSending *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSValue *, void*
- (void)insertSWYPendingCollaboration:(_SWPendingCollaboration *)arg1 collaborationShareOptions:(_SWCollaborationShareOptions *)arg2 collaborationMetadata:(_SWCollaborationMetadata *)arg3;
- (void)insertSWYPendingCollaboration:(void *)arg1 collaborationShareOptions:(void *)arg2 collaborationMetadata:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: _SWPendingCollaboration *, _SWCollaborationShareOptions *, _SWCollaborationMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)insertSWYPendingCollaboration:(void *)arg1 collaborationShareOptions:(void *)arg2 collaborationMetadata:(void *)arg3 sendAsCopyURL:(void *)arg4 isCollaboration:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 11: _SWPendingCollaboration *, _SWCollaborationShareOptions *, _SWCollaborationMetadata *, NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setCanEditRecipients:(bool)arg1;
- (void)setCloudPhotoIDs:(NSArray *)arg1;
- (void)setContentText:(NSArray *)arg1;
- (void)setContentURLs:(NSArray *)arg1;
- (void)setGameCenterModeWithPickerBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setGameCenterPickedHandles:(NSArray *)arg1 playerNames:(NSArray *)arg2;
- (void)setNavBarTitle:(NSString *)arg1;
- (void)setPendingAddresses:(NSArray *)arg1;
- (void)setPhotoIDs:(NSArray *)arg1;
- (void)setShareSheetSessionID:(NSString *)arg1;
- (void)setShouldDisableEntryField:(bool)arg1;
- (void)setShouldIgnoreEmailsWhenSending:(bool)arg1;
- (void)setText:(NSString *)arg1 subject:(NSString *)arg2 addresses:(NSArray *)arg3;
- (void)setText:(NSString *)arg1 subject:(NSString *)arg2 addresses:(NSArray *)arg3 chatGUID:(NSString *)arg4 groupName:(NSString *)arg5;
- (void)setText:(NSString *)arg1 subject:(NSString *)arg2 addresses:(NSArray *)arg3 shouldHideClearPluginButton:(bool)arg4;
- (void)setText:(NSString *)arg1 subject:(NSString *)arg2 addresses:(NSArray *)arg3 shouldHideClearPluginButton:(bool)arg4 chatGUID:(NSString *)arg5;
- (void)setTextEntryContentsVisible:(bool)arg1;
- (void)setUICustomizationData:(NSData *)arg1;
- (void)setUTIs:(NSArray *)arg1;
- (void)showInsertedItemInEntryView;

@end
