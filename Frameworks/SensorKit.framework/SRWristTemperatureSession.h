
@interface SRWristTemperatureSession : NSObject <NSCopying, NSSecureCoding, SRSampleExporting, SRSampling> {
    NSData * _dataRepresentation;
    HAWristTemperatureSession * _healthwristTemperatureSession;
}

@property (nonatomic, readonly) float a0CorrectionCoefficient;
@property (nonatomic, readonly) float c0CorrectionCoefficient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMeasurement *meanQuiescentPower;
@property (nonatomic, readonly) NSMeasurement *standardDeviationQuiescentPower;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSEnumerator *temperatures;
@property (nonatomic, readonly, copy) NSString *version;

+ (void)initialize;
+ (id)new;
+ (bool)supportsSecureCoding;

- (float)a0CorrectionCoefficient;
- (float)c0CorrectionCoefficient;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)meanQuiescentPower;
- (id)sr_dictionaryRepresentation;
- (id)standardDeviationQuiescentPower;
- (id)startDate;
- (id)temperatures;
- (id)version;

@end
