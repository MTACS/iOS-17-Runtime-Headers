
@interface CMHighFrequencyHeartRateData : CMLogItem <SRSampleExporting, SRSampling> {
    CMHeartRateData * _heartRateData;
}

@property (nonatomic, readonly) long long confidence;
@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double heartRate;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)binarySampleRepresentation;
- (long long)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (double)heartRate;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeartRateData:(id)arg1;
- (id)sr_dictionaryRepresentation;

@end
