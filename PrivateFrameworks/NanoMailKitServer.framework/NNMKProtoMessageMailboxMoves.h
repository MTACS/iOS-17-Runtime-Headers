
@interface NNMKProtoMessageMailboxMoves : PBCodable <NSCopying> {
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    }  _has;
    NSString * _mailboxId;
    NSMutableArray * _messageIds;
}

@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic) bool hasFullSyncVersion;
@property (nonatomic, readonly) bool hasMailboxId;
@property (nonatomic, retain) NSString *mailboxId;
@property (nonatomic, retain) NSMutableArray *messageIds;

+ (Class)messageIdsType;

- (void).cxx_destruct;
- (void)addMessageIds:(id)arg1;
- (void)clearMessageIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasFullSyncVersion;
- (bool)hasMailboxId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mailboxId;
- (void)mergeFrom:(id)arg1;
- (id)messageIds;
- (id)messageIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)messageIdsCount;
- (bool)readFrom:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setMailboxId:(id)arg1;
- (void)setMessageIds:(id)arg1;
- (void)writeTo:(id)arg1;

@end
