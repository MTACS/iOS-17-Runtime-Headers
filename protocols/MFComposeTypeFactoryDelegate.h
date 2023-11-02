
@protocol MFComposeTypeFactoryDelegate <NSObject>

@required

- (<MFMailAccountProxyGenerator> *)accountProxyGenerator;
- (NSArray *)attachments;
- (NSArray *)bccRecipients;
- (NSArray *)ccRecipients;
- (MFComposeWebView *)composeWebView;
- (MFMutableMessageHeaders *)savedHeaders;
- (MFMailAccountProxy *)sendingAccountProxy;
- (NSString *)sendingEmailAddress;
- (void)setBccRecipients:(NSArray *)arg1;
- (void)setCcRecipients:(NSArray *)arg1;
- (void)setSavedHeaders:(MFMutableMessageHeaders *)arg1;
- (void)setSendingEmailAddress:(NSString *)arg1;
- (void)setSubject:(NSString *)arg1;
- (void)setToRecipients:(NSArray *)arg1;
- (EFFuture *)shouldCreateRichTextRepresentation;
- (NSString *)subject;
- (NSArray *)toRecipients;

@optional

- (void)addSignature:(bool)arg1;
- (void)contentDidChange;
- (unsigned long long)contentVariationIndex;
- (void)setHideMyEmailAddressForMailToURLAddressString:(NSString *)arg1;
- (void)setIsQuickReply:(bool)arg1;
- (void)setOriginalMessageWasEncrypted:(bool)arg1;
- (void)setSendingEmailAddressAsHME:(NSString *)arg1 isComposeTypeReply:(bool)arg2;

@end
