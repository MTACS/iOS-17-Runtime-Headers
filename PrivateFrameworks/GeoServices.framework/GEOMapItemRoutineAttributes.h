
@interface GEOMapItemRoutineAttributes : PBCodable <NSCopying> {
    double  _eventDate;
    NSString * _eventName;
    struct { 
        unsigned int has_eventDate : 1; 
        unsigned int has_loiType : 1; 
        unsigned int has_isEventAllDay : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_eventName : 1; 
        unsigned int read_loiIdentifierString : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isEventAllDay;
    NSString * _loiIdentifierString;
    int  _loiType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) double eventDate;
@property (nonatomic, retain) NSString *eventName;
@property (nonatomic) bool hasEventDate;
@property (nonatomic, readonly) bool hasEventName;
@property (nonatomic) bool hasIsEventAllDay;
@property (nonatomic, readonly) bool hasLoiIdentifierString;
@property (nonatomic) bool hasLoiType;
@property (nonatomic) bool isEventAllDay;
@property (nonatomic, retain) NSUUID *loiIdentifier;
@property (nonatomic, retain) NSString *loiIdentifierString;
@property (nonatomic) int loiType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsLoiType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)eventDate;
- (id)eventName;
- (bool)hasEventDate;
- (bool)hasEventName;
- (bool)hasIsEventAllDay;
- (bool)hasLoiIdentifierString;
- (bool)hasLoiType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEventAllDay;
- (id)jsonRepresentation;
- (id)loiIdentifier;
- (id)loiIdentifierString;
- (int)loiType;
- (id)loiTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventDate:(double)arg1;
- (void)setEventName:(id)arg1;
- (void)setHasEventDate:(bool)arg1;
- (void)setHasIsEventAllDay:(bool)arg1;
- (void)setHasLoiType:(bool)arg1;
- (void)setIsEventAllDay:(bool)arg1;
- (void)setLoiIdentifier:(id)arg1;
- (void)setLoiIdentifierString:(id)arg1;
- (void)setLoiType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
