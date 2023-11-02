
@interface ENExposureClassification : NSObject <NSSecureCoding> {
    NSNumber * _clinicalDiagnosisPerDaySumERVAboveThreshold;
    NSNumber * _confirmedTestPerDaySumERVAboveThreshold;
    NSDate * _date;
    unsigned char  _index;
    NSString * _name;
    NSNumber * _perDayMaxERVAboveThreshold;
    NSNumber * _perDaySumERVAboveThreshold;
    NSNumber * _recursivePerDaySumERVAboveThreshold;
    ENRegion * _region;
    NSNumber * _selfReportPerDaySumERVAboveThreshold;
    NSNumber * _weightedDurationAtAttenuationAboveThreshold;
}

@property (nonatomic, readonly) bool anyThresholdsExceeded;
@property (nonatomic, copy) NSNumber *clinicalDiagnosisPerDaySumERVAboveThreshold;
@property (nonatomic, copy) NSNumber *confirmedTestPerDaySumERVAboveThreshold;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) unsigned char index;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *perDayMaxERVAboveThreshold;
@property (nonatomic, copy) NSNumber *perDaySumERVAboveThreshold;
@property (nonatomic, copy) NSNumber *recursivePerDaySumERVAboveThreshold;
@property (nonatomic, copy) ENRegion *region;
@property (nonatomic, copy) NSNumber *selfReportPerDaySumERVAboveThreshold;
@property (nonatomic, copy) NSNumber *weightedDurationAtAttenuationAboveThreshold;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)anyThresholdsExceeded;
- (id)clinicalDiagnosisPerDaySumERVAboveThreshold;
- (id)confirmedTestPerDaySumERVAboveThreshold;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)index;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)perDayMaxERVAboveThreshold;
- (id)perDaySumERVAboveThreshold;
- (id)recursivePerDaySumERVAboveThreshold;
- (id)region;
- (id)selfReportPerDaySumERVAboveThreshold;
- (void)setClinicalDiagnosisPerDaySumERVAboveThreshold:(id)arg1;
- (void)setConfirmedTestPerDaySumERVAboveThreshold:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setIndex:(unsigned char)arg1;
- (void)setName:(id)arg1;
- (void)setPerDayMaxERVAboveThreshold:(id)arg1;
- (void)setPerDaySumERVAboveThreshold:(id)arg1;
- (void)setRecursivePerDaySumERVAboveThreshold:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setSelfReportPerDaySumERVAboveThreshold:(id)arg1;
- (void)setWeightedDurationAtAttenuationAboveThreshold:(id)arg1;
- (id)weightedDurationAtAttenuationAboveThreshold;

@end
