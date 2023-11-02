
@interface GEOPDPoiEvent : PBCodable <NSCopying> {
    NSMutableArray * _eventCategorys;
    NSMutableArray * _eventDateTimes;
    GEOPDMapsIdentifier * _eventId;
    int  _expectedAttendance;
    struct { 
        unsigned int has_expectedAttendance : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_eventCategorys : 1; 
        unsigned int read_eventDateTimes : 1; 
        unsigned int read_eventId : 1; 
        unsigned int read_name : 1; 
        unsigned int read_performers : 1; 
        unsigned int read_poiIds : 1; 
        unsigned int read_timezone : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLocalizedString * _name;
    NSMutableArray * _performers;
    NSMutableArray * _poiIds;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOTimezone * _timezone;
    PBUnknownFields * _unknownFields;
}

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
