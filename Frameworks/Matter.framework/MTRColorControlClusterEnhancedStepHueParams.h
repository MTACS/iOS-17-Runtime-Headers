
@interface MTRColorControlClusterEnhancedStepHueParams : NSObject <NSCopying> {
    NSNumber * _optionsMask;
    NSNumber * _optionsOverride;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _stepMode;
    NSNumber * _stepSize;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _transitionTime;
}

@property (nonatomic, copy) NSNumber *optionsMask;
@property (nonatomic, copy) NSNumber *optionsOverride;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *stepMode;
@property (nonatomic, copy) NSNumber *stepSize;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *transitionTime;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)optionsMask;
- (id)optionsOverride;
- (id)serverSideProcessingTimeout;
- (void)setOptionsMask:(id)arg1;
- (void)setOptionsOverride:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setStepMode:(id)arg1;
- (void)setStepSize:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setTransitionTime:(id)arg1;
- (id)stepMode;
- (id)stepSize;
- (id)timedInvokeTimeoutMs;
- (id)transitionTime;

@end
