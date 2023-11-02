
@interface DEExtensionProvider : NSObject <NSExtensionRequestHandling> {
    bool  _allowUserAttachmentSelection;
    bool  _canGenerateNewAttachment;
    bool  _isEnhancedLoggingStateOn;
    NSString * _loggingConsent;
}

@property (nonatomic) bool allowUserAttachmentSelection;
@property (nonatomic) bool canGenerateNewAttachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isEnhancedLoggingStateOn;
@property (nonatomic, copy) NSString *loggingConsent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_getHostname;
- (bool)allowUserAttachmentSelection;
- (id)attachmentList;
- (id)attachmentsForParameters:(id)arg1;
- (id)attachmentsForParameters:(id)arg1 withProgressHandler:(id /* block */)arg2;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (bool)canGenerateNewAttachment;
- (id)filesInDir:(id)arg1 matchingPattern:(id)arg2 excludingPattern:(id)arg3;
- (id)init;
- (bool)isEnhancedLoggingStateOn;
- (void)isExtensionEnhancedLoggingStateOnWithHandler:(id /* block */)arg1;
- (id)loggingConsent;
- (void)setAllowUserAttachmentSelection:(bool)arg1;
- (void)setCanGenerateNewAttachment:(bool)arg1;
- (void)setIsEnhancedLoggingStateOn:(bool)arg1;
- (void)setLoggingConsent:(id)arg1;
- (void)setupWithParameters:(id)arg1;
- (void)teardownWithParameters:(id)arg1;

@end
