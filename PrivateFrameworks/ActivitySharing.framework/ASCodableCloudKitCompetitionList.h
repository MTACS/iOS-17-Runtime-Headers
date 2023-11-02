
@interface ASCodableCloudKitCompetitionList : PBCodable <NSCopying> {
    NSMutableArray * _competitions;
    NSData * _friendUUID;
    struct { 
        unsigned int type : 1; 
    }  _has;
    long long  _type;
}

@property (nonatomic, retain) NSMutableArray *competitions;
@property (nonatomic, retain) NSData *friendUUID;
@property (nonatomic, readonly) bool hasFriendUUID;
@property (nonatomic) bool hasType;
@property (nonatomic) long long type;

+ (Class)competitionsType;

- (void).cxx_destruct;
- (void)addCompetitions:(id)arg1;
- (void)clearCompetitions;
- (id)competitions;
- (id)competitionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)competitionsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)friendUUID;
- (bool)hasFriendUUID;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCompetitions:(id)arg1;
- (void)setFriendUUID:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)writeTo:(id)arg1;

@end
