
@interface GEOStorageCompletion : PBCodable <NSCopying> {
    GEOPDAutocompleteEntry * _autocompleteEntry;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDAutocompleteEntry *autocompleteEntry;
@property (nonatomic, readonly) bool hasAutocompleteEntry;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (id)storageForCompletionItem:(id)arg1;

- (void).cxx_destruct;
- (void)applyToUserSearchInput:(id)arg1;
- (id)autocompleteEntry;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutocompleteEntry;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAutocompleteEntry:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
