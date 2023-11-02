
@interface GEOPDDateTimeRange : PBCodable <NSCopying> {
    unsigned long long  _endDate;
    struct { 
        unsigned int has_endDate : 1; 
        unsigned int has_startDate : 1; 
    }  _flags;
    unsigned long long  _startDate;
    struct GEOPDLocalTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _timeRanges;
    unsigned long long  _timeRangesCount;
    unsigned long long  _timeRangesSpace;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasValidStartAndEndDates;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasValidStartAndEndDates;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
