
@interface HKCodableSummaryAudioExposureValue : PBCodable <NSCopying> {
    long long  _daysAggregated;
    struct APPLE_HKCodableSummaryAudioExposureValue_1 { 
        unsigned int daysAggregated : 1; 
        unsigned int lastUpdatedDateData : 1; 
        unsigned int secondsListened : 1; 
    }  _has;
    double  _lastUpdatedDateData;
    HKCodableQuantity * _leqQuantity;
    double  _secondsListened;
}

@property (nonatomic) long long daysAggregated;
@property (nonatomic) bool hasDaysAggregated;
@property (nonatomic) bool hasLastUpdatedDateData;
@property (nonatomic, readonly) bool hasLeqQuantity;
@property (nonatomic) bool hasSecondsListened;
@property (nonatomic) double lastUpdatedDateData;
@property (nonatomic, retain) HKCodableQuantity *leqQuantity;
@property (nonatomic) double secondsListened;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)daysAggregated;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDaysAggregated;
- (bool)hasLastUpdatedDateData;
- (bool)hasLeqQuantity;
- (bool)hasSecondsListened;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)lastUpdatedDateData;
- (id)leqQuantity;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)secondsListened;
- (void)setDaysAggregated:(long long)arg1;
- (void)setHasDaysAggregated:(bool)arg1;
- (void)setHasLastUpdatedDateData:(bool)arg1;
- (void)setHasSecondsListened:(bool)arg1;
- (void)setLastUpdatedDateData:(double)arg1;
- (void)setLeqQuantity:(id)arg1;
- (void)setSecondsListened:(double)arg1;
- (void)writeTo:(id)arg1;

@end
