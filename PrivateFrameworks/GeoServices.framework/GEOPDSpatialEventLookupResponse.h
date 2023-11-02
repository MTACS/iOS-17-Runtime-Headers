
@interface GEOPDSpatialEventLookupResponse : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _categorys;
    GEOLatLng * _center;
    NSMutableArray * _eventDateTimes;
    GEOPDMapsIdentifier * _eventId;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_categorys : 1; 
        unsigned int read_center : 1; 
        unsigned int read_eventDateTimes : 1; 
        unsigned int read_eventId : 1; 
        unsigned int read_poiId : 1; 
        unsigned int read_timezone : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDMapsIdentifier * _poiId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOTimezone * _timezone;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*categorys;
@property (nonatomic, readonly) unsigned long long categorysCount;
@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic, retain) NSMutableArray *eventDateTimes;
@property (nonatomic, retain) GEOPDMapsIdentifier *eventId;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic, readonly) bool hasEventId;
@property (nonatomic, readonly) bool hasPoiId;
@property (nonatomic, readonly) bool hasTimezone;
@property (nonatomic, retain) GEOPDMapsIdentifier *poiId;
@property (nonatomic, retain) GEOTimezone *timezone;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)eventDateTimeType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsCategorys:(id)arg1;
- (void)addCategory:(int)arg1;
- (void)addEventDateTime:(id)arg1;
- (int)categoryAtIndex:(unsigned long long)arg1;
- (int*)categorys;
- (id)categorysAsString:(int)arg1;
- (unsigned long long)categorysCount;
- (id)center;
- (void)clearCategorys;
- (void)clearEventDateTimes;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventDateTimeAtIndex:(unsigned long long)arg1;
- (id)eventDateTimes;
- (unsigned long long)eventDateTimesCount;
- (id)eventId;
- (bool)hasCenter;
- (bool)hasEventId;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasPoiId;
- (bool)hasTimezone;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)poiId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCenter:(id)arg1;
- (void)setEventDateTimes:(id)arg1;
- (void)setEventId:(id)arg1;
- (void)setPoiId:(id)arg1;
- (void)setTimezone:(id)arg1;
- (id)timezone;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
