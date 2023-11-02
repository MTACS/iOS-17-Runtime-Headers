
@interface GEOPDBusinessHours : PBCodable <NSCopying> {
    unsigned long long  _end;
    struct { 
        unsigned int has_end : 1; 
        unsigned int has_start : 1; 
        unsigned int has_hoursType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_hoursThreshold : 1; 
        unsigned int read_message : 1; 
        unsigned int read_shortMessage : 1; 
        unsigned int read_weeklyHours : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDHoursThreshold * _hoursThreshold;
    int  _hoursType;
    GEOLocalizedString * _message;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOLocalizedString * _shortMessage;
    unsigned long long  _start;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _weeklyHours;
}

+ (id)businessHoursForPlaceData:(id)arg1;

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
