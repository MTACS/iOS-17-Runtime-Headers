
@interface FTCPPETInteractionLogEvent : PBCodable <NSCopying> {
    unsigned long long  _hashedUserId;
    NSMutableArray * _interactions;
    unsigned long long  _snapshotTimestamp;
}

@property (nonatomic) unsigned long long hashedUserId;
@property (nonatomic, retain) NSMutableArray *interactions;
@property (nonatomic) unsigned long long snapshotTimestamp;

+ (Class)interactionsType;

- (void).cxx_destruct;
- (void)addInteractions:(id)arg1;
- (void)clearInteractions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (unsigned long long)hashedUserId;
- (id)interactions;
- (id)interactionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)interactionsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHashedUserId:(unsigned long long)arg1;
- (void)setInteractions:(id)arg1;
- (void)setSnapshotTimestamp:(unsigned long long)arg1;
- (unsigned long long)snapshotTimestamp;
- (void)writeTo:(id)arg1;

@end
