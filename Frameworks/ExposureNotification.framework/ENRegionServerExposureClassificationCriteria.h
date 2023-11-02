
@interface ENRegionServerExposureClassificationCriteria : NSObject <NSCopying, NSSecureCoding> {
    NSString * _classificationName;
    unsigned char  _index;
    unsigned int  _perDayMaxERVThreshold;
    unsigned int  _perDaySumERVThreshold;
    NSDictionary * _perDaySumERVThresholdsByDiagnosisReportType;
    unsigned int  _weightedDurationAtAttenuationThreshold;
}

@property (nonatomic, readonly, copy) NSString *classificationName;
@property (nonatomic, readonly) unsigned char index;
@property (nonatomic, readonly) unsigned int perDayMaxERVThreshold;
@property (nonatomic, readonly) unsigned int perDaySumERVThreshold;
@property (nonatomic, readonly, copy) NSDictionary *perDaySumERVThresholdsByDiagnosisReportType;
@property (nonatomic, readonly) unsigned int weightedDurationAtAttenuationThreshold;

+ (bool)getCriteria:(id*)arg1 fromDictionary:(id)arg2 index:(unsigned char)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)classificationName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)index;
- (id)initWithCoder:(id)arg1;
- (unsigned int)perDayMaxERVThreshold;
- (unsigned int)perDaySumERVThreshold;
- (id)perDaySumERVThresholdsByDiagnosisReportType;
- (unsigned int)weightedDurationAtAttenuationThreshold;

@end
