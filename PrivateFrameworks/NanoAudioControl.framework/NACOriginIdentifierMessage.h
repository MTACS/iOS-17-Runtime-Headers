
@interface NACOriginIdentifierMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int originIdentifier : 1; 
    }  _has;
    int  _originIdentifier;
}

@property (nonatomic) bool hasOriginIdentifier;
@property (nonatomic) int originIdentifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOriginIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)originIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setHasOriginIdentifier:(bool)arg1;
- (void)setOriginIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end
