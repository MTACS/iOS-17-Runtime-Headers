
@interface GEOGenericSubstitutes : PBCodable <NSCopying> {
    struct { 
        unsigned int has_waypointCategory : 1; 
    }  _flags;
    GEOFormattedString * _substitute;
    PBUnknownFields * _unknownFields;
    int  _waypointCategory;
}

@property (nonatomic, readonly) bool hasSubstitute;
@property (nonatomic) bool hasWaypointCategory;
@property (nonatomic, retain) GEOFormattedString *substitute;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) int waypointCategory;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsWaypointCategory:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSubstitute;
- (bool)hasWaypointCategory;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasWaypointCategory:(bool)arg1;
- (void)setSubstitute:(id)arg1;
- (void)setWaypointCategory:(int)arg1;
- (id)substitute;
- (id)unknownFields;
- (int)waypointCategory;
- (id)waypointCategoryAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
