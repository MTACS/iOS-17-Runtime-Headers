
@interface MFPlaceholderMessageRewriter : NSObject <MFComposeTypeFactoryDelegate> {
    MFOutgoingMessageContent * _originalMessageContent;
    <MFMessageRewriterPlaceholderResolver> * _placeholderResolver;
    NSMutableArray * _placeholders;
    MFOutgoingMessageContent * _rewrittenMessageContent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MFOutgoingMessageContent *originalMessageContent;
@property (nonatomic) <MFMessageRewriterPlaceholderResolver> *placeholderResolver;
@property (readonly) Class superclass;

+ (id)_deriveOutgoingMessageContentFromLibraryMessageContent:(id)arg1;

- (void).cxx_destruct;
- (id)accountProxyGenerator;
- (id)attachments;
- (id)bccRecipients;
- (id)ccRecipients;
- (id)composeWebView;
- (id)init;
- (id)initWithOriginalMessageContent:(id)arg1 resolver:(id)arg2;
- (id)originalMessageContent;
- (id)placeholderResolver;
- (id)rewrittenMessageContent;
- (id)savedHeaders;
- (id)sendingAccountProxy;
- (id)sendingEmailAddress;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setPlaceholderResolver:(id)arg1;
- (void)setSavedHeaders:(id)arg1;
- (void)setSendingEmailAddress:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (id)shouldCreateRichTextRepresentation;
- (id)subject;
- (id)toRecipients;

@end
