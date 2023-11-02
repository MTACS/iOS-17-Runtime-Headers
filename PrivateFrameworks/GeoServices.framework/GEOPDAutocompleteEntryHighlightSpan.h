
@interface GEOPDAutocompleteEntryHighlightSpan : PBCodable <NSCopying> {
    struct { 
        unsigned int has_length : 1; 
        unsigned int has_startIndex : 1; 
    }  _flags;
    unsigned int  _length;
    unsigned int  _startIndex;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasLength;
@property (nonatomic) bool hasStartIndex;
@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLength;
- (bool)hasStartIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)length;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLength:(bool)arg1;
- (void)setHasStartIndex:(bool)arg1;
- (void)setLength:(unsigned int)arg1;
- (void)setStartIndex:(unsigned int)arg1;
- (unsigned int)startIndex;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
