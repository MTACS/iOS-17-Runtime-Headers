
@interface GEOPDAutocompleteEntryClientResolved : PBCodable <NSCopying> {
    struct { 
        unsigned int has_resolvedItemType : 1; 
    }  _flags;
    int  _resolvedItemType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasResolvedItemType;
@property (nonatomic) int resolvedItemType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsResolvedItemType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResolvedItemType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)resolvedItemType;
- (id)resolvedItemTypeAsString:(int)arg1;
- (void)setHasResolvedItemType:(bool)arg1;
- (void)setResolvedItemType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
