
@interface _HKQuantitySeriesSampleQueryServerConfiguration : HKQueryServerConfiguration {
    NSDate * _latestSampleStartDate;
    NSUUID * _latestUUID;
    NSDate * _maximumStartDate;
    long long  _mode;
    unsigned long long  _options;
    HKQuantitySample * _quantitySample;
    long long  _seriesAnchor;
}

@property (nonatomic, copy) NSDate *latestSampleStartDate;
@property (nonatomic, copy) NSUUID *latestUUID;
@property (nonatomic, copy) NSDate *maximumStartDate;
@property (nonatomic) long long mode;
@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) HKQuantitySample *quantitySample;
@property (nonatomic) long long seriesAnchor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)latestSampleStartDate;
- (id)latestUUID;
- (id)maximumStartDate;
- (long long)mode;
- (unsigned long long)options;
- (id)quantitySample;
- (long long)seriesAnchor;
- (void)setLatestSampleStartDate:(id)arg1;
- (void)setLatestUUID:(id)arg1;
- (void)setMaximumStartDate:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setQuantitySample:(id)arg1;
- (void)setSeriesAnchor:(long long)arg1;

@end
