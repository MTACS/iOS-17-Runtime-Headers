
@interface ATXUsageInsightsInferredModeEvent : NSObject <NSSecureCoding> {
    unsigned long long  _atxMode;
    NSDate * _endTime;
    NSDate * _startTime;
}

@property (nonatomic, readonly) unsigned long long atxMode;
@property (nonatomic, readonly) NSDate *endTime;
@property (nonatomic, readonly) NSDate *startTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)atxMode;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (id)initWithATXMode:(unsigned long long)arg1 startTime:(id)arg2 endTime:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)startTime;

@end
