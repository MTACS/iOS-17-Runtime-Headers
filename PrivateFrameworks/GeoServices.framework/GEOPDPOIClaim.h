
@interface GEOPDPOIClaim : PBCodable <NSCopying> {
    NSString * _claimUrl;
    struct { 
        unsigned int has_isClaimable : 1; 
        unsigned int has_isClaimed : 1; 
    }  _flags;
    bool  _isClaimable;
    bool  _isClaimed;
    PBUnknownFields * _unknownFields;
}

+ (id)poiClaimForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
