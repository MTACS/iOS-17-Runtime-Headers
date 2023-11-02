
@interface CSVoiceTriggerFirstPassMetrics : NSObject {
    NSNumber * _firstPassInfoGeneratedTime;
    NSNumber * _firstPassInfoProcessedTime;
}

@property (nonatomic, readonly) NSNumber *firstPassInfoGeneratedTime;
@property (nonatomic, readonly) NSNumber *firstPassInfoProcessedTime;

+ (id)CSVoiceTriggerFirstPassMetricsWithFirstPassInfoGeneratedTime:(unsigned long long)arg1 firstPassInfoProcessedTime:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_initWithFirstPassInfoGeneratedTime:(unsigned long long)arg1 firstPassInfoProcessedTime:(unsigned long long)arg2;
- (id)firstPassInfoGeneratedTime;
- (id)firstPassInfoProcessedTime;

@end
