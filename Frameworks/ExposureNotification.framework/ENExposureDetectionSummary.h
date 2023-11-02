
@interface ENExposureDetectionSummary : NSObject <CUXPCCodable> {
    NSArray * _attenuationDurations;
    NSArray * _daySummaries;
    long long  _daysSinceLastExposure;
    unsigned long long  _matchedKeyCount;
    unsigned char  _maximumRiskScore;
    double  _maximumRiskScoreFullRange;
    NSDictionary * _metadata;
    double  _riskScoreSumFullRange;
}

@property (nonatomic, copy) NSArray *attenuationDurations;
@property (nonatomic, copy) NSArray *daySummaries;
@property (nonatomic) long long daysSinceLastExposure;
@property (nonatomic) unsigned long long matchedKeyCount;
@property (nonatomic) unsigned char maximumRiskScore;
@property (nonatomic) double maximumRiskScoreFullRange;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic) double riskScoreSumFullRange;

- (void).cxx_destruct;
- (id)attenuationDurations;
- (id)daySummaries;
- (long long)daysSinceLastExposure;
- (id)description;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (unsigned long long)matchedKeyCount;
- (unsigned char)maximumRiskScore;
- (double)maximumRiskScoreFullRange;
- (id)metadata;
- (double)riskScoreSumFullRange;
- (void)setAttenuationDurations:(id)arg1;
- (void)setDaySummaries:(id)arg1;
- (void)setDaysSinceLastExposure:(long long)arg1;
- (void)setMatchedKeyCount:(unsigned long long)arg1;
- (void)setMaximumRiskScore:(unsigned char)arg1;
- (void)setMaximumRiskScoreFullRange:(double)arg1;
- (void)setRiskScoreSumFullRange:(double)arg1;

@end
