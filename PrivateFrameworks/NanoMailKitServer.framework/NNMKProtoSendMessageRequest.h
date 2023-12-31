
@interface NNMKProtoSendMessageRequest : PBRequest <NSCopying> {
    NSString * _accountId;
    NSString * _body;
    NSMutableArray * _ccs;
    NSString * _composedMessageId;
    NSString * _from;
    struct { 
        unsigned int sendingType : 1; 
        unsigned int includeAttachments : 1; 
    }  _has;
    bool  _includeAttachments;
    NSString * _referenceMessageId;
    unsigned int  _sendingType;
    NSString * _subject;
    NSMutableArray * _tos;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, retain) NSString *body;
@property (nonatomic, retain) NSMutableArray *ccs;
@property (nonatomic, retain) NSString *composedMessageId;
@property (nonatomic, retain) NSString *from;
@property (nonatomic, readonly) bool hasAccountId;
@property (nonatomic, readonly) bool hasBody;
@property (nonatomic, readonly) bool hasComposedMessageId;
@property (nonatomic, readonly) bool hasFrom;
@property (nonatomic) bool hasIncludeAttachments;
@property (nonatomic, readonly) bool hasReferenceMessageId;
@property (nonatomic) bool hasSendingType;
@property (nonatomic, readonly) bool hasSubject;
@property (nonatomic) bool includeAttachments;
@property (nonatomic, retain) NSString *referenceMessageId;
@property (nonatomic) unsigned int sendingType;
@property (nonatomic, retain) NSString *subject;
@property (nonatomic, retain) NSMutableArray *tos;

+ (Class)ccType;
+ (Class)toType;

- (void).cxx_destruct;
- (id)accountId;
- (void)addCc:(id)arg1;
- (void)addTo:(id)arg1;
- (id)body;
- (id)ccAtIndex:(unsigned long long)arg1;
- (id)ccs;
- (unsigned long long)ccsCount;
- (void)clearCcs;
- (void)clearTos;
- (id)composedMessageId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)from;
- (bool)hasAccountId;
- (bool)hasBody;
- (bool)hasComposedMessageId;
- (bool)hasFrom;
- (bool)hasIncludeAttachments;
- (bool)hasReferenceMessageId;
- (bool)hasSendingType;
- (bool)hasSubject;
- (unsigned long long)hash;
- (bool)includeAttachments;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)referenceMessageId;
- (unsigned int)sendingType;
- (void)setAccountId:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCcs:(id)arg1;
- (void)setComposedMessageId:(id)arg1;
- (void)setFrom:(id)arg1;
- (void)setHasIncludeAttachments:(bool)arg1;
- (void)setHasSendingType:(bool)arg1;
- (void)setIncludeAttachments:(bool)arg1;
- (void)setReferenceMessageId:(id)arg1;
- (void)setSendingType:(unsigned int)arg1;
- (void)setSubject:(id)arg1;
- (void)setTos:(id)arg1;
- (id)subject;
- (id)toAtIndex:(unsigned long long)arg1;
- (id)tos;
- (unsigned long long)tosCount;
- (void)writeTo:(id)arg1;

@end
