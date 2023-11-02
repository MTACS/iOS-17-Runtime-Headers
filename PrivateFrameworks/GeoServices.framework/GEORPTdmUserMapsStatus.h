
@interface GEORPTdmUserMapsStatus : PBCodable <NSCopying> {
    struct { 
        unsigned int has_version : 1; 
        unsigned int has_isBlocked : 1; 
    }  _flags;
    bool  _isBlocked;
    PBUnknownFields * _unknownFields;
    unsigned long long  _version;
}

@property (nonatomic) bool hasIsBlocked;
@property (nonatomic) bool hasVersion;
@property (nonatomic) bool isBlocked;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned long long version;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsBlocked;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isBlocked;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsBlocked:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setIsBlocked:(bool)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (id)unknownFields;
- (unsigned long long)version;
- (void)writeTo:(id)arg1;

@end
