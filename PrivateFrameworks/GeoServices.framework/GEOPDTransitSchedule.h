
@interface GEOPDTransitSchedule : PBCodable <NSCopying> {
    GEOPDDeparturePredicate * _departurePredicateCountdown;
    GEOPDDeparturePredicate * _departurePredicateStamp;
    NSMutableArray * _departureSequenceContainers;
    NSMutableArray * _departureSequences;
    struct { 
        unsigned int has_operatingHoursRange : 1; 
        unsigned int has_ttlSeconds : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_departurePredicateCountdown : 1; 
        unsigned int read_departurePredicateStamp : 1; 
        unsigned int read_departureSequenceContainers : 1; 
        unsigned int read_departureSequences : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct GEOPDTimeRange { 
        unsigned int _duration; 
        unsigned int _startTime; 
        struct { 
            unsigned int duration : 1; 
            unsigned int startTime : 1; 
        } _has; 
    }  _operatingHoursRange;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned long long  _ttlSeconds;
    PBUnknownFields * _unknownFields;
}

+ (id)transitScheduleForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
