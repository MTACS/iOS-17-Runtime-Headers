
@interface GEOElevationSegmentDescription : PBCodable <NSCopying> {
    unsigned int  _endOffsetM;
    struct { 
        unsigned int has_endOffsetM : 1; 
        unsigned int has_startOffsetM : 1; 
    }  _flags;
    GEOFormattedString * _formattedDescription;
    unsigned int  _startOffsetM;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int endOffsetM;
@property (nonatomic, retain) GEOFormattedString *formattedDescription;
@property (nonatomic) bool hasEndOffsetM;
@property (nonatomic, readonly) bool hasFormattedDescription;
@property (nonatomic) bool hasStartOffsetM;
@property (nonatomic) unsigned int startOffsetM;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endOffsetM;
- (id)formattedDescription;
- (bool)hasEndOffsetM;
- (bool)hasFormattedDescription;
- (bool)hasStartOffsetM;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndOffsetM:(unsigned int)arg1;
- (void)setFormattedDescription:(id)arg1;
- (void)setHasEndOffsetM:(bool)arg1;
- (void)setHasStartOffsetM:(bool)arg1;
- (void)setStartOffsetM:(unsigned int)arg1;
- (unsigned int)startOffsetM;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
