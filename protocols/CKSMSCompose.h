
@protocol CKSMSCompose <NSObject>

@required

+ (bool)acceptsMIMEType:(NSString *)arg1;
+ (bool)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+ (double)maxTrimDurationForAudio;
+ (double)maxTrimDurationForVideo;

- (void)configureForDeviceValidation;
- (void)disableCameraAttachments;
- (void)forceCancelComposition;
- (void)forceMMS;
- (bool)insertAttachmentWithURL:(NSURL *)arg1 andDescription:(NSString *)arg2;
- (bool)insertCKShareForCollaboration:(CKShare *)arg1 containerSetupInfo:(CKContainerSetupInfo *)arg2 collaborationShareOptions:(_SWCollaborationShareOptions *)arg3 isCollaboration:(bool)arg4;
- (bool)insertCKShareForCollaboration:(void *)arg1 containerSetupInfo:(void *)arg2 collaborationShareOptions:(void *)arg3 isCollaboration:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: CKShare *, CKContainerSetupInfo *, _SWCollaborationShareOptions *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)insertData:(NSData *)arg1 MIMEType:(NSString *)arg2 exportedFilename:(NSString *)arg3;
- (bool)insertFileURLForCollaboration:(NSURL *)arg1 collaborationShareOptions:(_SWCollaborationShareOptions *)arg2 metadata:(_SWCollaborationMetadata *)arg3 isCollaboration:(bool)arg4;
- (bool)insertFileURLForCollaboration:(NSURL *)arg1 collaborationShareOptions:(_SWCollaborationShareOptions *)arg2 metadata:(_SWCollaborationMetadata *)arg3 sendAsCopyURL:(NSURL *)arg4 isCollaboration:(bool)arg5;
- (bool)insertFileURLForCollaboration:(void *)arg1 collaborationShareOptions:(void *)arg2 metadata:(void *)arg3 sendAsCopyURL:(void *)arg4 isCollaboration:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 11: NSURL *, _SWCollaborationShareOptions *, _SWCollaborationMetadata *, NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)insertFilename:(NSString *)arg1 MIMEType:(NSString *)arg2 exportedFilename:(NSString *)arg3 options:(NSDictionary *)arg4;
- (bool)insertGroupActivity:(TUConversationActivity *)arg1;
- (bool)insertMessage:(MSMessage *)arg1;
- (bool)insertRichLinkWithURL:(NSURL *)arg1 andData:(NSData *)arg2;
- (bool)insertSWYPendingCollaboration:(_SWPendingCollaboration *)arg1 collaborationShareOptions:(_SWCollaborationShareOptions *)arg2 collaborationMetadata:(_SWCollaborationMetadata *)arg3;
- (bool)insertSWYPendingCollaboration:(void *)arg1 collaborationShareOptions:(void *)arg2 collaborationMetadata:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: _SWPendingCollaboration *, _SWCollaborationShareOptions *, _SWCollaborationMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)insertSWYPendingCollaboration:(void *)arg1 collaborationShareOptions:(void *)arg2 collaborationMetadata:(void *)arg3 sendAsCopyURL:(void *)arg4 isCollaboration:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 11: _SWPendingCollaboration *, _SWCollaborationShareOptions *, _SWCollaborationMetadata *, NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
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

@end
