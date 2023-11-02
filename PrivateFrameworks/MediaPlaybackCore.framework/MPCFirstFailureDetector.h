
@interface MPCFirstFailureDetector : NSObject {
    unsigned long long  _currentFailureStartSample;
    unsigned long long  _currentSample;
    double  _dT;
    unsigned long long  _failureCount;
    unsigned long long  _lastFailureSample;
    double  _limit;
    MPCAudioFailure * _multiSamplesFailure;
    MPCAudioFailure * _singleSampleFailure;
    long long  _state;
}

@property (nonatomic, readonly) MPCAudioFailure *multiSamplesFailure;
@property (nonatomic, readonly) double samplingTime;
@property (nonatomic, readonly) MPCAudioFailure *singleSampleFailure;

- (void).cxx_destruct;
- (id)initWithSamplingTime:(double)arg1 renderingLimit:(double)arg2;
- (id)multiSamplesFailure;
- (bool)processSample:(id)arg1;
- (double)samplingTime;
- (id)singleSampleFailure;

@end
