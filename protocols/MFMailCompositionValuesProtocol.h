
@protocol MFMailCompositionValuesProtocol <NSObject>

@required

- (NSString *)autosaveIdentifier;
- (NSArray *)bccRecipients;
- (unsigned long long)caretPosition;
- (NSArray *)ccRecipients;
- (CKContainerSetupInfo *)ckContainerSetupInfo;
- (CKShare *)ckShare;
- (bool)ckShareAllowOthersToInvite;
- (long long)ckSharePermissionType;
- (long long)composeType;
- (NSMutableArray *)contentVariations;
- (long long)defaultContentVariationIndex;
- (NSMutableArray *)deferredAttachments;
- (NSString *)from;
- (NSString *)hideMyEmailFrom;
- (bool)includeAttachments;
- (bool)isHTML;
- (bool)isUsingDefaultAccount;
- (NSURL *)mailtoURL;
- (NSString *)messageBody;
- (NSArray *)originalContent;
- (NSString *)preferredSendingEmailAddress;
- (bool)prefersFirstLineSelection;
- (unsigned long long)sendLaterContext;
- (NSDate *)sendLaterDate;
- (NSData *)serializedMailboxObjectID;
- (NSData *)serializedMessageObjectID;
- (void)setAutosaveIdentifier:(NSString *)arg1;
- (void)setBccRecipients:(NSArray *)arg1;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)setCcRecipients:(NSArray *)arg1;
- (void)setCkContainerSetupInfo:(CKContainerSetupInfo *)arg1;
- (void)setCkShare:(CKShare *)arg1;
- (void)setCkShareAllowOthersToInvite:(bool)arg1;
- (void)setCkSharePermissionType:(long long)arg1;
- (void)setComposeType:(long long)arg1;
- (void)setContentVariations:(NSMutableArray *)arg1;
- (void)setDefaultContentVariationIndex:(long long)arg1;
- (void)setDeferredAttachments:(NSMutableArray *)arg1;
- (void)setFrom:(NSString *)arg1;
- (void)setHideMyEmailFrom:(NSString *)arg1;
- (void)setIncludeAttachments:(bool)arg1;
- (void)setIsHTML:(bool)arg1;
- (void)setIsUsingDefaultAccount:(bool)arg1;
- (void)setMailtoURL:(NSURL *)arg1;
- (void)setMessageBody:(NSString *)arg1;
- (void)setOriginalContent:(NSArray *)arg1;
- (void)setPreferredSendingEmailAddress:(NSString *)arg1;
- (void)setPrefersFirstLineSelection:(bool)arg1;
- (void)setSendLaterContext:(unsigned long long)arg1;
- (void)setSendLaterDate:(NSDate *)arg1;
- (void)setSerializedMailboxObjectID:(NSData *)arg1;
- (void)setSerializedMessageObjectID:(NSData *)arg1;
- (void)setShowContentImmediately:(bool)arg1;
- (void)setShowKeyboardImmediately:(bool)arg1;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setSubject:(NSString *)arg1;
- (void)setToRecipients:(NSArray *)arg1;
- (bool)showContentImmediately;
- (bool)showKeyboardImmediately;
- (int)sourceAccountManagement;
- (NSString *)subject;
- (NSArray *)toRecipients;

@end
