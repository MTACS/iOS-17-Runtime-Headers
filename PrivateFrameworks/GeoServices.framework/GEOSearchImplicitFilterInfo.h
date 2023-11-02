
@interface GEOSearchImplicitFilterInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_searchAlongRouteMuid : 1; 
        unsigned int has_searchImplicitType : 1; 
    }  _flags;
    unsigned long long  _searchAlongRouteMuid;
    int  _searchImplicitType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasSearchAlongRouteMuid;
@property (nonatomic) bool hasSearchImplicitType;
@property (nonatomic) unsigned long long searchAlongRouteMuid;
@property (nonatomic) int searchImplicitType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsSearchImplicitType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSearchAlongRouteMuid;
- (bool)hasSearchImplicitType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)searchAlongRouteMuid;
- (int)searchImplicitType;
- (id)searchImplicitTypeAsString:(int)arg1;
- (void)setHasSearchAlongRouteMuid:(bool)arg1;
- (void)setHasSearchImplicitType:(bool)arg1;
- (void)setSearchAlongRouteMuid:(unsigned long long)arg1;
- (void)setSearchImplicitType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
