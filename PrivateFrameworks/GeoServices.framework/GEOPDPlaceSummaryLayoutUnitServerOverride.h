
@interface GEOPDPlaceSummaryLayoutUnitServerOverride : PBCodable <NSCopying> {
    struct { 
        unsigned int has_serverOverrideIdentifier : 1; 
    }  _flags;
    unsigned int  _serverOverrideIdentifier;
}

@property (nonatomic) bool hasServerOverrideIdentifier;
@property (nonatomic) unsigned int serverOverrideIdentifier;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasServerOverrideIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)serverOverrideIdentifier;
- (void)setHasServerOverrideIdentifier:(bool)arg1;
- (void)setServerOverrideIdentifier:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
