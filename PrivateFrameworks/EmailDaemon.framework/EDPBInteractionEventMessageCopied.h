
@interface EDPBInteractionEventMessageCopied : PBCodable <EDPBDataSetters, NSCopying> {
    long long  _accountId;
    long long  _conversationId;
    long long  _fromMailboxId;
    int  _fromMailboxType;
    struct { 
        unsigned int accountId : 1; 
        unsigned int conversationId : 1; 
        unsigned int fromMailboxId : 1; 
        unsigned int messageId : 1; 
        unsigned int toMailboxId : 1; 
        unsigned int fromMailboxType : 1; 
        unsigned int toMailboxType : 1; 
    }  _has;
    long long  _messageId;
    long long  _toMailboxId;
    int  _toMailboxType;
}

@property (nonatomic) long long accountId;
@property (nonatomic) long long conversationId;
@property (nonatomic) long long fromMailboxId;
@property (nonatomic) int fromMailboxType;
@property (nonatomic) bool hasAccountId;
@property (nonatomic) bool hasConversationId;
@property (nonatomic) bool hasFromMailboxId;
@property (nonatomic) bool hasFromMailboxType;
@property (nonatomic) bool hasMessageId;
@property (nonatomic) bool hasToMailboxId;
@property (nonatomic) bool hasToMailboxType;
@property (nonatomic) long long messageId;
@property (nonatomic) long long toMailboxId;
@property (nonatomic) int toMailboxType;

- (int)StringAsFromMailboxType:(id)arg1;
- (int)StringAsToMailboxType:(id)arg1;
- (long long)accountId;
- (long long)conversationId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)fromMailboxId;
- (int)fromMailboxType;
- (id)fromMailboxTypeAsString:(int)arg1;
- (bool)hasAccountId;
- (bool)hasConversationId;
- (bool)hasFromMailboxId;
- (bool)hasFromMailboxType;
- (bool)hasMessageId;
- (bool)hasToMailboxId;
- (bool)hasToMailboxType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)messageId;
- (bool)readFrom:(id)arg1;
- (void)setAccountId:(long long)arg1;
- (void)setConversationId:(long long)arg1;
- (void)setFromMailboxId:(long long)arg1;
- (void)setFromMailboxType:(int)arg1;
- (void)setHasAccountId:(bool)arg1;
- (void)setHasConversationId:(bool)arg1;
- (void)setHasFromMailboxId:(bool)arg1;
- (void)setHasFromMailboxType:(bool)arg1;
- (void)setHasMessageId:(bool)arg1;
- (void)setHasToMailboxId:(bool)arg1;
- (void)setHasToMailboxType:(bool)arg1;
- (void)setMessageId:(long long)arg1;
- (void)setToMailboxId:(long long)arg1;
- (void)setToMailboxType:(int)arg1;
- (long long)toMailboxId;
- (int)toMailboxType;
- (id)toMailboxTypeAsString:(int)arg1;
- (void)withHasher:(id)arg1 setMessage:(id)arg2 mailbox:(id)arg3;
- (void)writeTo:(id)arg1;

@end
