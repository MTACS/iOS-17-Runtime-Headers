
@interface MFMailDelivery : NSObject {
    DeliveryAccount * _account;
    long long  _action;
    MailAccount * _archiveAccount;
    NSDictionary * _compositionSpecification;
    unsigned long long  _conversationFlags;
    id  _delegate;
    EFFuture * _followUpFuture;
    MFMutableMessageHeaders * _headers;
    ECHTMLStringAndMIMECharset * _htmlString;
    bool  _isUserRequested;
    MFMailMessage * _message;
    NSArray * _mixedContent;
    MFMailMessage * _originalMessage;
    EMMessageObjectID * _originalMessageObjectID;
    NSArray * _otherStringsAndAttachments;
    MFPlainTextDocument * _plainTextAlternative;
    MFDeliveryResult * _result;
    bool  _shouldEncrypt;
    bool  _shouldSign;
    bool  _textPartsAreHTML;
    unsigned int  _threaded;
    unsigned int  _useCellDataOnly;
}

@property (nonatomic) long long action;
@property (nonatomic, retain) NSDictionary *compositionSpecification;
@property (nonatomic) unsigned long long conversationFlags;
@property (nonatomic) id delegate;
@property (nonatomic) bool isUserRequested;
@property (nonatomic, retain) MFMailMessage *originalMessage;
@property (nonatomic, retain) EMMessageObjectID *originalMessageObjectID;
@property (nonatomic) bool shouldEncrypt;
@property (nonatomic) bool shouldSign;

+ (bool)deliverMessage:(id)arg1;
+ (id)log;
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(bool)arg3;
+ (id)newWithMessage:(id)arg1;

- (void).cxx_destruct;
- (void)_checkAndApplyFollowUpToDeliveredMessage:(id)arg1;
- (id)_htmlBodyForMessage:(id)arg1;
- (id)account;
- (long long)action;
- (void)archive;
- (id)archiveAccount;
- (id)compositionSpecification;
- (unsigned long long)conversationFlags;
- (void)dealloc;
- (id)delegate;
- (void)deliverAsynchronously;
- (id)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (id)deliverSynchronously;
- (id)deliveryResult;
- (long long)deliveryStatus;
- (id)followUpWarning;
- (id)headersForDelivery;
- (id)init;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(bool)arg3;
- (id)initWithMessage:(id)arg1;
- (bool)isUserRequested;
- (id)message;
- (id)newMessageWriter;
- (id)originalHeaders;
- (id)originalMessage;
- (id)originalMessageObjectID;
- (void)setAccount:(id)arg1;
- (void)setAction:(long long)arg1;
- (void)setArchiveAccount:(id)arg1;
- (void)setCellDataOnly:(bool)arg1;
- (void)setCompositionSpecification:(id)arg1;
- (void)setConversationFlags:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsUserRequested:(bool)arg1;
- (void)setOriginalMessage:(id)arg1;
- (void)setOriginalMessageObjectID:(id)arg1;
- (void)setShouldEncrypt:(bool)arg1;
- (void)setShouldSign:(bool)arg1;
- (bool)shouldEncrypt;
- (bool)shouldSign;
- (void)updateOriginalMessageFromHeaders:(id)arg1;

@end
