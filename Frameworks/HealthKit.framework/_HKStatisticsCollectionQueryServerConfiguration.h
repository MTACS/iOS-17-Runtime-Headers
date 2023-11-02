
@interface _HKStatisticsCollectionQueryServerConfiguration : HKQueryServerConfiguration {
    NSDate * _anchorDate;
    HKStatisticsCollectionCacheSettings * _cacheSettings;
    NSDateInterval * _dateInterval;
    NSDateComponents * _intervalComponents;
    unsigned long long  _mergeStrategy;
    unsigned long long  _options;
}

@property (nonatomic, copy) NSDate *anchorDate;
@property (nonatomic, copy) HKStatisticsCollectionCacheSettings *cacheSettings;
@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (nonatomic, copy) NSDateComponents *intervalComponents;
@property (nonatomic) unsigned long long mergeStrategy;
@property (nonatomic) unsigned long long options;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorDate;
- (id)cacheSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)intervalComponents;
- (unsigned long long)mergeStrategy;
- (unsigned long long)options;
- (void)setAnchorDate:(id)arg1;
- (void)setCacheSettings:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setIntervalComponents:(id)arg1;
- (void)setMergeStrategy:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
