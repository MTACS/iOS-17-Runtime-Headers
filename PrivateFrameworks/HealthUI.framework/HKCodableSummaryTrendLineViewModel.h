
@interface HKCodableSummaryTrendLineViewModel : PBCodable <NSCopying> {
    double  _average;
    HKCodableDateInterval * _dateInterval;
    struct APPLE_HKCodableSummaryTrendLineViewModel_1 { 
        unsigned int average : 1; 
    }  _has;
    NSString * _lineLabel;
    NSString * _xAxisLabel;
}

@property (nonatomic) double average;
@property (nonatomic, retain) HKCodableDateInterval *dateInterval;
@property (nonatomic) bool hasAverage;
@property (nonatomic, readonly) bool hasDateInterval;
@property (nonatomic, readonly) bool hasLineLabel;
@property (nonatomic, readonly) bool hasXAxisLabel;
@property (nonatomic, retain) NSString *lineLabel;
@property (nonatomic, retain) NSString *xAxisLabel;

- (void).cxx_destruct;
- (double)average;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAverage;
- (bool)hasDateInterval;
- (bool)hasLineLabel;
- (bool)hasXAxisLabel;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lineLabel;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAverage:(double)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setHasAverage:(bool)arg1;
- (void)setLineLabel:(id)arg1;
- (void)setXAxisLabel:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)xAxisLabel;

@end
