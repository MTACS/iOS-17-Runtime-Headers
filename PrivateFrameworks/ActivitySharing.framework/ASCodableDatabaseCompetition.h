
@interface ASCodableDatabaseCompetition : PBCodable <NSCopying> {
    ASCodableCloudKitCompetition * _competition;
    NSData * _friendUUID;
    struct { 
        unsigned int type : 1; 
    }  _has;
    long long  _type;
}

@property (nonatomic, retain) ASCodableCloudKitCompetition *competition;
@property (nonatomic, retain) NSData *friendUUID;
@property (nonatomic, readonly) bool hasCompetition;
@property (nonatomic, readonly) bool hasFriendUUID;
@property (nonatomic) bool hasType;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)competition;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)friendUUID;
- (bool)hasCompetition;
- (bool)hasFriendUUID;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCompetition:(id)arg1;
- (void)setFriendUUID:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)writeTo:(id)arg1;

@end
