
@interface ENExposureInfo : NSObject <CUXPCCodable> {
    NSArray * _attenuationDurations;
    unsigned char  _attenuationValue;
    NSDate * _date;
    long long  _daysSinceOnsetOfSymptoms;
    unsigned int  _diagnosisReportType;
    double  _duration;
    NSDictionary * _metadata;
    unsigned char  _totalRiskScore;
    double  _totalRiskScoreFullRange;
    unsigned char  _transmissionRiskLevel;
}

@property (nonatomic, copy) NSArray *attenuationDurations;
@property (nonatomic) unsigned char attenuationValue;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) long long daysSinceOnsetOfSymptoms;
@property (nonatomic) unsigned int diagnosisReportType;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic) unsigned char totalRiskScore;
@property (nonatomic) double totalRiskScoreFullRange;
@property (nonatomic) unsigned char transmissionRiskLevel;

- (void).cxx_destruct;
- (id)attenuationDurations;
- (unsigned char)attenuationValue;
- (id)date;
- (long long)daysSinceOnsetOfSymptoms;
- (id)description;
- (unsigned int)diagnosisReportType;
- (double)duration;
- (void)encodeWithXPCObject:(id)arg1;
- (id)init;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (id)metadata;
- (void)setAttenuationDurations:(id)arg1;
- (void)setAttenuationValue:(unsigned char)arg1;
- (void)setDate:(id)arg1;
- (void)setDaysSinceOnsetOfSymptoms:(long long)arg1;
- (void)setDiagnosisReportType:(unsigned int)arg1;
- (void)setDuration:(double)arg1;
- (void)setMetadata:(id)arg1;
- (void)setTotalRiskScore:(unsigned char)arg1;
- (void)setTotalRiskScoreFullRange:(double)arg1;
- (void)setTransmissionRiskLevel:(unsigned char)arg1;
- (unsigned char)totalRiskScore;
- (double)totalRiskScoreFullRange;
- (unsigned char)transmissionRiskLevel;

@end
