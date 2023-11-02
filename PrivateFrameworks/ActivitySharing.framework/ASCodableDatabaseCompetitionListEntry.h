
@interface ASCodableDatabaseCompetitionListEntry : PBCodable <NSCopying> {
    NSData * _friendUUID;
    struct { 
        unsigned int owner : 1; 
        unsigned int type : 1; 
    }  _has;
    long long  _owner;
    NSData * _systemFieldsOnlyRecord;
    long long  _type;
}

@property (nonatomic, retain) NSData *friendUUID;
@property (nonatomic, readonly) bool hasFriendUUID;
@property (nonatomic) bool hasOwner;
@property (nonatomic, readonly) bool hasSystemFieldsOnlyRecord;
@property (nonatomic) bool hasType;
@property (nonatomic) long long owner;
@property (nonatomic, retain) NSData *systemFieldsOnlyRecord;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)friendUUID;
- (bool)hasFriendUUID;
- (bool)hasOwner;
- (bool)hasSystemFieldsOnlyRecord;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)owner;
- (bool)readFrom:(id)arg1;
- (void)setFriendUUID:(id)arg1;
- (void)setHasOwner:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setOwner:(long long)arg1;
- (void)setSystemFieldsOnlyRecord:(id)arg1;
- (void)setType:(long long)arg1;
- (id)systemFieldsOnlyRecord;
- (long long)type;
- (void)writeTo:(id)arg1;

@end
