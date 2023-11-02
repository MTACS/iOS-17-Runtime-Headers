
@interface GEOPDPlaceSummaryFormat : PBCodable <NSCopying> {
    unsigned int  _endIndex;
    struct { 
        unsigned int has_endIndex : 1; 
        unsigned int has_formatType : 1; 
        unsigned int has_startIndex : 1; 
    }  _flags;
    int  _formatType;
    unsigned int  _startIndex;
    GEOPDMapsIdentifier * _tapPlaceId;
}

@property (nonatomic) unsigned int endIndex;
@property (nonatomic) int formatType;
@property (nonatomic) bool hasEndIndex;
@property (nonatomic) bool hasFormatType;
@property (nonatomic) bool hasStartIndex;
@property (nonatomic, readonly) bool hasTapPlaceId;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic, retain) GEOPDMapsIdentifier *tapPlaceId;
@property (nonatomic, readonly) GEOMapItemIdentifier *tappableEntryIdentifier;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsFormatType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endIndex;
- (int)formatType;
- (id)formatTypeAsString:(int)arg1;
- (bool)hasEndIndex;
- (bool)hasFormatType;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasStartIndex;
- (bool)hasTapPlaceId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndIndex:(unsigned int)arg1;
- (void)setFormatType:(int)arg1;
- (void)setHasEndIndex:(bool)arg1;
- (void)setHasFormatType:(bool)arg1;
- (void)setHasStartIndex:(bool)arg1;
- (void)setStartIndex:(unsigned int)arg1;
- (void)setTapPlaceId:(id)arg1;
- (unsigned int)startIndex;
- (id)tapPlaceId;
- (id)tappableEntryIdentifier;
- (void)writeTo:(id)arg1;

@end
