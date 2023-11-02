
@interface NPKProtoPassSyncStateChangeProcessed : PBCodable <NSCopying> {
    NSData * _acceptedChangeUUID;
    bool  _changeAccepted;
    bool  _fullPassRequired;
    struct { 
        unsigned int changeAccepted : 1; 
        unsigned int fullPassRequired : 1; 
    }  _has;
}

@property (nonatomic, retain) NSData *acceptedChangeUUID;
@property (nonatomic) bool changeAccepted;
@property (nonatomic) bool fullPassRequired;
@property (nonatomic) bool hasChangeAccepted;
@property (nonatomic) bool hasFullPassRequired;

- (void).cxx_destruct;
- (id)acceptedChangeUUID;
- (bool)changeAccepted;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)fullPassRequired;
- (bool)hasChangeAccepted;
- (bool)hasFullPassRequired;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAcceptedChangeUUID:(id)arg1;
- (void)setChangeAccepted:(bool)arg1;
- (void)setFullPassRequired:(bool)arg1;
- (void)setHasChangeAccepted:(bool)arg1;
- (void)setHasFullPassRequired:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
