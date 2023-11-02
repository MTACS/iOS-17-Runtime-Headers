
@interface _HKStatisticsQueryServerConfiguration : HKQueryServerConfiguration {
    NSDateInterval * _dateInterval;
    unsigned long long  _mergeStrategy;
    unsigned long long  _options;
}

@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (nonatomic) unsigned long long mergeStrategy;
@property (nonatomic) unsigned long long options;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)mergeStrategy;
- (unsigned long long)options;
- (void)setDateInterval:(id)arg1;
- (void)setMergeStrategy:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
