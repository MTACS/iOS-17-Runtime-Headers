
@interface EDPBInteractionEventCategoryMarked : PBCodable <EDPBBaseMessageFields, EDPBDataSetters, NSCopying> {
    long long  _accountId;
    int  _categoryType;
    long long  _conversationId;
    struct { 
        unsigned int accountId : 1; 
        unsigned int conversationId : 1; 
        unsigned int mailboxId : 1; 
        unsigned int messageId : 1; 
        unsigned int categoryType : 1; 
        unsigned int mailboxType : 1; 
        unsigned int positive : 1; 
        unsigned int removeAllUserOverrides : 1; 
    }  _has;
    long long  _mailboxId;
    int  _mailboxType;
    long long  _messageId;
    bool  _positive;
    bool  _removeAllUserOverrides;
}

@property (nonatomic) long long accountId;
@property (nonatomic) int categoryType;
@property (nonatomic) long long conversationId;
@property (nonatomic) bool hasAccountId;
@property (nonatomic) bool hasCategoryType;
@property (nonatomic) bool hasConversationId;
@property (nonatomic) bool hasMailboxId;
@property (nonatomic) bool hasMailboxType;
@property (nonatomic) bool hasMessageId;
@property (nonatomic) bool hasPositive;
@property (nonatomic) bool hasRemoveAllUserOverrides;
@property (nonatomic) long long mailboxId;
@property (nonatomic) int mailboxType;
@property (nonatomic) long long messageId;
@property (nonatomic) bool positive;
@property (nonatomic) bool removeAllUserOverrides;

- (int)StringAsCategoryType:(id)arg1;
- (int)StringAsMailboxType:(id)arg1;
- (long long)accountId;
- (int)categoryType;
- (id)categoryTypeAsString:(int)arg1;
- (long long)conversationId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountId;
- (bool)hasCategoryType;
- (bool)hasConversationId;
- (bool)hasMailboxId;
- (bool)hasMailboxType;
- (bool)hasMessageId;
- (bool)hasPositive;
- (bool)hasRemoveAllUserOverrides;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)mailboxId;
- (int)mailboxType;
- (id)mailboxTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)messageId;
- (bool)positive;
- (bool)readFrom:(id)arg1;
- (bool)removeAllUserOverrides;
- (void)setAccountId:(long long)arg1;
- (void)setCategoryType:(int)arg1;
- (void)setConversationId:(long long)arg1;
- (void)setHasAccountId:(bool)arg1;
- (void)setHasCategoryType:(bool)arg1;
- (void)setHasConversationId:(bool)arg1;
- (void)setHasMailboxId:(bool)arg1;
- (void)setHasMailboxType:(bool)arg1;
- (void)setHasMessageId:(bool)arg1;
- (void)setHasPositive:(bool)arg1;
- (void)setHasRemoveAllUserOverrides:(bool)arg1;
- (void)setMailboxId:(long long)arg1;
- (void)setMailboxType:(int)arg1;
- (void)setMessageId:(long long)arg1;
- (void)setPositive:(bool)arg1;
- (void)setRemoveAllUserOverrides:(bool)arg1;
- (void)withHasher:(id)arg1 setMessage:(id)arg2 data:(id)arg3;
- (void)writeTo:(id)arg1;

@end
