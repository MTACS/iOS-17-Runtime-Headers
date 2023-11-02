
@interface HKCurrentActivityCacheQueryServerConfiguration : HKQueryServerConfiguration {
    NSDateComponents * _statisticsIntervalComponents;
}

@property (nonatomic, copy) NSDateComponents *statisticsIntervalComponents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setStatisticsIntervalComponents:(id)arg1;
- (id)statisticsIntervalComponents;

@end
