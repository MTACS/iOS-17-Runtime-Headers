
@interface HKCodableQuantityDistributionData : PBCodable <NSCopying> {
    HKCodableQuantity * _averageValue;
    NSMutableArray * _contextIdentifiers;
    HKCodableQuantity * _duration;
    double  _endDate;
    struct APPLE_HKCodableQuantityDistributionData_1 { 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
    }  _has;
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _histogramCounts;
    HKCodableQuantity * _maximumValue;
    HKCodableQuantity * _minimumBucketValue;
    HKCodableQuantity * _minimumValue;
    double  _startDate;
}

@property (nonatomic, retain) HKCodableQuantity *averageValue;
@property (nonatomic, retain) NSMutableArray *contextIdentifiers;
@property (nonatomic, retain) HKCodableQuantity *duration;
@property (nonatomic) double endDate;
@property (nonatomic, readonly) bool hasAverageValue;
@property (nonatomic, readonly) bool hasDuration;
@property (nonatomic) bool hasEndDate;
@property (nonatomic, readonly) bool hasMaximumValue;
@property (nonatomic, readonly) bool hasMinimumBucketValue;
@property (nonatomic, readonly) bool hasMinimumValue;
@property (nonatomic) bool hasStartDate;
@property (nonatomic, readonly) double*histogramCounts;
@property (nonatomic, readonly) unsigned long long histogramCountsCount;
@property (nonatomic, retain) HKCodableQuantity *maximumValue;
@property (nonatomic, retain) HKCodableQuantity *minimumBucketValue;
@property (nonatomic, retain) HKCodableQuantity *minimumValue;
@property (nonatomic) double startDate;

+ (Class)contextIdentifiersType;

- (void).cxx_destruct;
- (void)addContextIdentifiers:(id)arg1;
- (void)addHistogramCounts:(double)arg1;
- (id)averageValue;
- (void)clearContextIdentifiers;
- (void)clearHistogramCounts;
- (id)contextIdentifiers;
- (id)contextIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contextIdentifiersCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)duration;
- (double)endDate;
- (bool)hasAverageValue;
- (bool)hasDuration;
- (bool)hasEndDate;
- (bool)hasMaximumValue;
- (bool)hasMinimumBucketValue;
- (bool)hasMinimumValue;
- (bool)hasStartDate;
- (unsigned long long)hash;
- (double*)histogramCounts;
- (double)histogramCountsAtIndex:(unsigned long long)arg1;
- (unsigned long long)histogramCountsCount;
- (bool)isEqual:(id)arg1;
- (id)maximumValue;
- (void)mergeFrom:(id)arg1;
- (id)minimumBucketValue;
- (id)minimumValue;
- (bool)readFrom:(id)arg1;
- (void)setAverageValue:(id)arg1;
- (void)setContextIdentifiers:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setHistogramCounts:(double*)arg1 count:(unsigned long long)arg2;
- (void)setMaximumValue:(id)arg1;
- (void)setMinimumBucketValue:(id)arg1;
- (void)setMinimumValue:(id)arg1;
- (void)setStartDate:(double)arg1;
- (double)startDate;
- (void)writeTo:(id)arg1;

@end
