
@interface ENExposureDetectionDaemonSessionResult : NSObject {
    NSData * _differentialPrivacyBeaconCount;
    NSData * _differentialPrivacyRiskParameters;
    ENExposureClassification * _exposureClassification;
    long long  _exposureClassificationStatus;
    ENRegion * _region;
    ENExposureDetectionDaemonSessionStatistics * _statistics;
    ENExposureDetectionSummary * _summary;
}

@property (nonatomic, copy) NSData *differentialPrivacyBeaconCount;
@property (nonatomic, copy) NSData *differentialPrivacyRiskParameters;
@property (nonatomic, retain) ENExposureClassification *exposureClassification;
@property (nonatomic) long long exposureClassificationStatus;
@property (nonatomic, copy) ENRegion *region;
@property (nonatomic, copy) ENExposureDetectionDaemonSessionStatistics *statistics;
@property (nonatomic, retain) ENExposureDetectionSummary *summary;

- (void).cxx_destruct;
- (id)differentialPrivacyBeaconCount;
- (id)differentialPrivacyRiskParameters;
- (id)exposureClassification;
- (long long)exposureClassificationStatus;
- (id)region;
- (void)setDifferentialPrivacyBeaconCount:(id)arg1;
- (void)setDifferentialPrivacyRiskParameters:(id)arg1;
- (void)setExposureClassification:(id)arg1;
- (void)setExposureClassificationStatus:(long long)arg1;
- (void)setRegion:(id)arg1;
- (void)setStatistics:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)statistics;
- (id)summary;

@end
