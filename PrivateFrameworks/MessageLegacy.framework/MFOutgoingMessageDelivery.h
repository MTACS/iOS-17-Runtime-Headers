
@interface MFOutgoingMessageDelivery : NSObject {
    long long  _action;
    MailAccount * _archiveAccount;
    MFAttachmentCompositionContext * _attachmentContext;
    NSDictionary * _compositionSpecification;
    unsigned long long  _conversationFlags;
    MFMailDelivery * _currentDeliveryObject;
    <MFDeliveryDelegate> * _delegate;
    DeliveryAccount * _deliveryAccount;
    MFMutableMessageHeaders * _headers;
    ECHTMLStringAndMIMECharset * _htmlBody;
    bool  _isUserRequested;
    MFMailMessage * _message;
    NSArray * _mixedContent;
    long long  _originalConversationId;
    MFMailMessage * _originalMessage;
    NSArray * _otherHTMLAndAttachments;
    MFPlainTextDocument * _plainTextAlternative;
    long long  _retryCount;
    bool  _shouldEncrypt;
    bool  _shouldSign;
    bool  _textPartsAreHTML;
}

@property (nonatomic) long long action;
@property (nonatomic, retain) MFAttachmentCompositionContext *attachmentContext;
@property (nonatomic, retain) NSDictionary *compositionSpecification;
@property (nonatomic) unsigned long long conversationFlags;
@property (nonatomic) <MFDeliveryDelegate> *delegate;
@property (nonatomic) bool isUserRequested;
@property (nonatomic) long long originalConversationId;
@property (nonatomic, retain) MFMailMessage *originalMessage;
@property (nonatomic) long long retryCount;
@property (nonatomic) bool shouldEncrypt;
@property (nonatomic) bool shouldSign;

+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(bool)arg3;
+ (id)newWithMessage:(id)arg1;

- (void).cxx_destruct;
- (id)_currentDeliveryObject;
- (id)_deliverSynchronouslyWithCurrentSettings:(bool)arg1;
- (id)_deliveryAccountForInitializers;
- (id)account;
- (long long)action;
- (id)attachmentContext;
- (id)compositionSpecification;
- (unsigned long long)conversationFlags;
- (id)delegate;
- (id)deliverSynchronouslyWithCompletion:(id /* block */)arg1;
- (long long)deliveryStatus;
- (id)init;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(bool)arg3;
- (id)initWithMessage:(id)arg1;
- (bool)isUserRequested;
- (id)message;
- (long long)originalConversationId;
- (id)originalHeaders;
- (id)originalMessage;
- (id)originalMessageObjectID;
- (long long)retryCount;
- (void)setAccount:(id)arg1;
- (void)setAction:(long long)arg1;
- (void)setArchiveAccount:(id)arg1;
- (void)setAttachmentContext:(id)arg1;
- (void)setCompositionSpecification:(id)arg1;
- (void)setConversationFlags:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsUserRequested:(bool)arg1;
- (void)setOriginalConversationId:(long long)arg1;
- (void)setOriginalMessage:(id)arg1;
- (void)setRetryCount:(long long)arg1;
- (void)setShouldEncrypt:(bool)arg1;
- (void)setShouldSign:(bool)arg1;
- (bool)shouldEncrypt;
- (bool)shouldSign;

@end
