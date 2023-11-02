
@interface GEOPDHours : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _days;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_days : 1; 
        unsigned int read_timeRanges : 1; 
        unsigned int read_hoursThreshold : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDHoursThreshold * _hoursThreshold;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct GEOPDLocalTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _timeRanges;
    unsigned long long  _timeRangesCount;
    unsigned long long  _timeRangesSpace;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*days;
@property (nonatomic, readonly) unsigned long long daysCount;
@property (nonatomic, readonly) bool hasHoursThreshold;
@property (nonatomic, retain) GEOPDHoursThreshold *hoursThreshold;
@property (nonatomic, readonly) struct GEOPDLocalTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*timeRanges;
@property (nonatomic, readonly) unsigned long long timeRangesCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)_allHoursForPlaceData:(id)arg1;
+ (id)completeOperatingHoursForPlaceData:(id)arg1 date:(id)arg2 withTimeZone:(id)arg3;
+ (bool)currentOperatingHoursAvailableForPlaceData:(id)arg1 withTimeZone:(id)arg2;
+ (bool)isValid:(id)arg1;
+ (bool)operatingHoursAvailableForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsDays:(id)arg1;
- (void)addDay:(int)arg1;
- (void)addTimeRange:(struct GEOPDLocalTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)clearDays;
- (void)clearTimeRanges;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dayAtIndex:(unsigned long long)arg1;
- (int*)days;
- (id)daysAsString:(int)arg1;
- (unsigned long long)daysCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHoursThreshold;
- (unsigned long long)hash;
- (id)hoursThreshold;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDays:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHoursThreshold:(id)arg1;
- (void)setTimeRanges:(struct GEOPDLocalTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (struct GEOPDLocalTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })timeRangeAtIndex:(unsigned long long)arg1;
- (struct GEOPDLocalTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)timeRanges;
- (unsigned long long)timeRangesCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
