
@interface EDPBInteractionEventMessageViewEnd : PBCodable <EDPBBaseMessageFields, EDPBDataSetters, NSCopying> {
    long long  _accountId;
    long long  _conversationId;
    double  _duration;
    struct { 
        unsigned int accountId : 1; 
        unsigned int conversationId : 1; 
        unsigned int duration : 1; 
        unsigned int mailboxId : 1; 
        unsigned int messageId : 1; 
        unsigned int mailboxType : 1; 
        unsigned int scrolledToEnd : 1; 
    }  _has;
    long long  _mailboxId;
    int  _mailboxType;
    long long  _messageId;
    bool  _scrolledToEnd;
}

@property (nonatomic) long long accountId;
@property (nonatomic) long long conversationId;
@property (nonatomic) double duration;
@property (nonatomic) bool hasAccountId;
@property (nonatomic) bool hasConversationId;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasMailboxId;
@property (nonatomic) bool hasMailboxType;
@property (nonatomic) bool hasMessageId;
@property (nonatomic) bool hasScrolledToEnd;
@property (nonatomic) long long mailboxId;
@property (nonatomic) int mailboxType;
@property (nonatomic) long long messageId;
@property (nonatomic) bool scrolledToEnd;

- (int)StringAsMailboxType:(id)arg1;
- (long long)accountId;
- (long long)conversationId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (bool)hasAccountId;
- (bool)hasConversationId;
- (bool)hasDuration;
- (bool)hasMailboxId;
- (bool)hasMailboxType;
- (bool)hasMessageId;
- (bool)hasScrolledToEnd;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)mailboxId;
- (int)mailboxType;
- (id)mailboxTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)messageId;
- (bool)readFrom:(id)arg1;
- (bool)scrolledToEnd;
- (void)setAccountId:(long long)arg1;
- (void)setConversationId:(long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setHasAccountId:(bool)arg1;
- (void)setHasConversationId:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasMailboxId:(bool)arg1;
- (void)setHasMailboxType:(bool)arg1;
- (void)setHasMessageId:(bool)arg1;
- (void)setHasScrolledToEnd:(bool)arg1;
- (void)setMailboxId:(long long)arg1;
- (void)setMailboxType:(int)arg1;
- (void)setMessageId:(long long)arg1;
- (void)setScrolledToEnd:(bool)arg1;
- (void)withHasher:(id)arg1 setMessage:(id)arg2 data:(id)arg3;
- (void)writeTo:(id)arg1;

@end
