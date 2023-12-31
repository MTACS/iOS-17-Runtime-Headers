
@interface MFPlaceholderMailDeliveryUI : MFOutgoingMessageDelivery <MFMessageRewriterPlaceholderResolver> {
    NSString * _contextID;
    MFPlaceholderMessageRewriter * _rewriter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attachmentsContextID;
- (id)contentForContentID:(id)arg1;
- (id)contentForPlaceholder:(id)arg1;
- (id)contentForURL:(id)arg1;
- (id)deliverSynchronouslyWithCompletion:(id /* block */)arg1;
- (id)initWithMessage:(id)arg1;

@end
