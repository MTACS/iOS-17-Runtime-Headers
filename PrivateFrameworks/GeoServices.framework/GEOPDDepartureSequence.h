
@interface GEOPDDepartureSequence : PBCodable <NSCopying> {
    GEOPBTransitArtwork * _artwork;
    NSMutableArray * _departureFrequencys;
    NSMutableArray * _departures;
    NSString * _directionNameString;
    NSString * _displayName;
    struct { 
        unsigned int has_lineId : 1; 
        unsigned int has_stopId : 1; 
        unsigned int has_transitId : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_nextStopIds : 1; 
        unsigned int read_operatingHours : 1; 
        unsigned int read_artwork : 1; 
        unsigned int read_departureFrequencys : 1; 
        unsigned int read_departures : 1; 
        unsigned int read_directionNameString : 1; 
        unsigned int read_displayName : 1; 
        unsigned int read_headsignString : 1; 
        unsigned int read_originName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _headsignString;
    unsigned long long  _lineId;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _nextStopIds;
    struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _operatingHours;
    unsigned long long  _operatingHoursCount;
    unsigned long long  _operatingHoursSpace;
    NSString * _originName;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned long long  _stopId;
    unsigned long long  _transitId;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
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
