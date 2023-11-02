
@interface NNMKComposedMessage : NSObject <NSSecureCoding> {
    NSString * _accountId;
    NSArray * _attachments;
    NSString * _body;
    NSArray * _cc;
    NSString * _composedMessageId;
    NSString * _from;
    bool  _includeAttachments;
    long long  _progress;
    NSString * _referenceMessageId;
    unsigned long long  _sendingType;
    NSString * _standaloneReferenceMessageId;
    NSString * _subject;
    NSArray * _to;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, retain) NSArray *attachments;
@property (nonatomic, retain) NSString *body;
@property (nonatomic, retain) NSArray *cc;
@property (nonatomic, retain) NSString *composedMessageId;
@property (nonatomic, retain) NSString *from;
@property (nonatomic) bool includeAttachments;
@property (nonatomic) long long progress;
@property (nonatomic, retain) NSString *referenceMessageId;
@property (nonatomic) unsigned long long sendingType;
@property (nonatomic, retain) NSString *standaloneReferenceMessageId;
@property (nonatomic, retain) NSString *subject;
@property (nonatomic, retain) NSArray *to;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountId;
- (id)attachments;
- (id)body;
- (id)cc;
- (id)composedMessageId;
- (id)copyWithNewId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)from;
- (bool)includeAttachments;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)progress;
- (id)referenceMessageId;
- (unsigned long long)sendingType;
- (void)setAccountId:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCc:(id)arg1;
- (void)setComposedMessageId:(id)arg1;
- (void)setFrom:(id)arg1;
- (void)setIncludeAttachments:(bool)arg1;
- (void)setProgress:(long long)arg1;
- (void)setReferenceMessageId:(id)arg1;
- (void)setSendingType:(unsigned long long)arg1;
- (void)setStandaloneReferenceMessageId:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTo:(id)arg1;
- (unsigned long long)size;
- (id)standaloneReferenceMessageId;
- (id)subject;
- (id)to;

@end
