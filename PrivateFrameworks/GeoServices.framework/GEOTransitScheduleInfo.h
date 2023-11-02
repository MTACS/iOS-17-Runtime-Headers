
@interface GEOTransitScheduleInfo : PBCodable <NSCopying> {
    GEOTransitEntry * _entry;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOTransitEntry *entry;
@property (nonatomic, readonly) bool hasEntry;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entry;
- (bool)hasEntry;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned long long)lineID;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routingParameters;
- (void)setEntry:(id)arg1;
- (id)staticDepartureDate;
- (unsigned long long)tripID;
- (id)unknownFields;
- (id)windowStartDate;
- (void)writeTo:(id)arg1;

@end
