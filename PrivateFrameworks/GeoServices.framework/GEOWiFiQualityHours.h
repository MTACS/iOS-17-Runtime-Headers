
@interface GEOWiFiQualityHours : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _days;
    struct { 
        unsigned int read_days : 1; 
        unsigned int read_timeRanges : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct GEOWiFiQualityTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _timeRanges;
    unsigned long long  _timeRangesCount;
    unsigned long long  _timeRangesSpace;
}

@property (nonatomic, readonly) int*days;
@property (nonatomic, readonly) unsigned long long daysCount;
@property (nonatomic, readonly) struct GEOWiFiQualityTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*timeRanges;
@property (nonatomic, readonly) unsigned long long timeRangesCount;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsDays:(id)arg1;
- (void)addDays:(int)arg1;
- (void)addTimeRanges:(struct GEOWiFiQualityTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)clearDays;
- (void)clearTimeRanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int*)days;
- (id)daysAsString:(int)arg1;
- (int)daysAtIndex:(unsigned long long)arg1;
- (unsigned long long)daysCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
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
- (void)setTimeRanges:(struct GEOWiFiQualityTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (struct GEOWiFiQualityTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)timeRanges;
- (struct GEOWiFiQualityTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })timeRangesAtIndex:(unsigned long long)arg1;
- (unsigned long long)timeRangesCount;
- (void)writeTo:(id)arg1;

@end
