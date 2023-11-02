
@interface EDPBMessageData : PBCodable <EDPBBaseMessageFields, EDPBDataSetters, EDPETMessageFrameTypeIntrospectable, NSCopying> {
    long long  _accountId;
    long long  _conversationId;
    struct { 
        unsigned int accountId : 1; 
        unsigned int conversationId : 1; 
        unsigned int mailboxId : 1; 
        unsigned int messageId : 1; 
        unsigned int mailboxType : 1; 
    }  _has;
    EDPBMessageHeaders * _headers;
    long long  _mailboxId;
    int  _mailboxType;
    long long  _messageId;
}

@property (nonatomic) long long accountId;
@property (nonatomic) long long conversationId;
@property (nonatomic) bool hasAccountId;
@property (nonatomic) bool hasConversationId;
@property (nonatomic, readonly) bool hasHeaders;
@property (nonatomic) bool hasMailboxId;
@property (nonatomic) bool hasMailboxType;
@property (nonatomic) bool hasMessageId;
@property (nonatomic, retain) EDPBMessageHeaders *headers;
@property (nonatomic) long long mailboxId;
@property (nonatomic) int mailboxType;
@property (nonatomic) long long messageId;

- (void).cxx_destruct;
- (int)StringAsMailboxType:(id)arg1;
- (long long)accountId;
- (long long)conversationId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountId;
- (bool)hasConversationId;
- (bool)hasHeaders;
- (bool)hasMailboxId;
- (bool)hasMailboxType;
- (bool)hasMessageId;
- (unsigned long long)hash;
- (id)headers;
- (bool)isEqual:(id)arg1;
- (long long)mailboxId;
- (int)mailboxType;
- (id)mailboxTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (int)messageFrameType;
- (long long)messageId;
- (bool)readFrom:(id)arg1;
- (void)setAccountId:(long long)arg1;
- (void)setConversationId:(long long)arg1;
- (void)setHasAccountId:(bool)arg1;
- (void)setHasConversationId:(bool)arg1;
- (void)setHasMailboxId:(bool)arg1;
- (void)setHasMailboxType:(bool)arg1;
- (void)setHasMessageId:(bool)arg1;
- (void)setHeaders:(id)arg1;
- (void)setMailboxId:(long long)arg1;
- (void)setMailboxType:(int)arg1;
- (void)setMessageId:(long long)arg1;
- (void)withHasher:(id)arg1 setDataFromMessage:(id)arg2;
- (void)withHasher:(id)arg1 setDataFromMessage:(id)arg2 account:(id)arg3;
- (void)writeTo:(id)arg1;

@end
