
@interface GEONavigabilityInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_isBlocked : 1; 
        unsigned int has_isEvFeasible : 1; 
    }  _flags;
    bool  _isBlocked;
    bool  _isEvFeasible;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIsBlocked;
@property (nonatomic) bool hasIsEvFeasible;
@property (nonatomic) bool isBlocked;
@property (nonatomic) bool isEvFeasible;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsBlocked;
- (bool)hasIsEvFeasible;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isBlocked;
- (bool)isEqual:(id)arg1;
- (bool)isEvFeasible;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsBlocked:(bool)arg1;
- (void)setHasIsEvFeasible:(bool)arg1;
- (void)setIsBlocked:(bool)arg1;
- (void)setIsEvFeasible:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
