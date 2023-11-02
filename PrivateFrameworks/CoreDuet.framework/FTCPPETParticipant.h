
@interface FTCPPETParticipant : PBCodable <NSCopying> {
    unsigned long long  _hashedId;
    bool  _isContact;
}

@property (nonatomic) unsigned long long hashedId;
@property (nonatomic) bool isContact;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (unsigned long long)hashedId;
- (bool)isContact;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHashedId:(unsigned long long)arg1;
- (void)setIsContact:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
