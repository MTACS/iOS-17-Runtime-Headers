
@interface CMHeartRateData : CMLogItem <SRSampling> {
    double  _confidence;
    long long  _dataSource;
    bool  _error;
    double  _frequency;
    double  _heartRate;
    long long  _mode;
    NSDate * _startDate;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) long long dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool error;
@property (nonatomic) double frequency;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double heartRate;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;

+ (id)dataSourceName:(long long)arg1;
+ (id)modeName:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)binarySampleRepresentation;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataSource;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)error;
- (double)frequency;
- (double)heartRate;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeartRate:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3 startDate:(id)arg4 error:(bool)arg5 dataSource:(long long)arg6 mode:(long long)arg7;
- (id)initWithHighFrequencyHeartRate:(id)arg1;
- (long long)mode;
- (void)setFrequency:(double)arg1;
- (id)startDate;

@end
