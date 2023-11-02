
@interface GEOPDDeparturePredicate : PBCodable <NSCopying> {
    struct { 
        unsigned int has_timeRange : 1; 
        unsigned int has_numAdditionalDepartures : 1; 
    }  _flags;
    unsigned int  _numAdditionalDepartures;
    struct GEOPDTimeRange { 
        unsigned int _duration; 
        unsigned int _startTime; 
        struct { 
            unsigned int duration : 1; 
            unsigned int startTime : 1; 
        } _has; 
    }  _timeRange;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithTraitsTransitModeFilter:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
