
@interface SGQuickResponsesClassificationParameters : NSObject {
    double  _dynamicLabelSamplingRate;
    unsigned long long  _maxPromptLength;
    double  _maxPromptWindowSeconds;
    unsigned long long  _maxReplyLength;
    double  _negativeSamplingRate;
    double  _positiveSamplingRate;
    NSString * _promptJoiningString;
}

@property (nonatomic, readonly) double dynamicLabelSamplingRate;
@property (nonatomic, readonly) unsigned long long maxPromptLength;
@property (nonatomic, readonly) double maxPromptWindowSeconds;
@property (nonatomic, readonly) unsigned long long maxReplyLength;
@property (nonatomic, readonly) double negativeSamplingRate;
@property (nonatomic, readonly) double positiveSamplingRate;
@property (nonatomic, readonly) NSString *promptJoiningString;

- (void).cxx_destruct;
- (double)dynamicLabelSamplingRate;
- (id)initWithDictionary:(id)arg1 language:(id)arg2;
- (unsigned long long)maxPromptLength;
- (double)maxPromptWindowSeconds;
- (unsigned long long)maxReplyLength;
- (double)negativeSamplingRate;
- (double)positiveSamplingRate;
- (id)promptJoiningString;

@end
