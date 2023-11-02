
@interface MTRColorControlClusterMoveToHueParams : NSObject <NSCopying> {
    NSNumber * _direction;
    NSNumber * _hue;
    NSNumber * _optionsMask;
    NSNumber * _optionsOverride;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _transitionTime;
}

@property (nonatomic, copy) NSNumber *direction;
@property (nonatomic, copy) NSNumber *hue;
@property (nonatomic, copy) NSNumber *optionsMask;
@property (nonatomic, copy) NSNumber *optionsOverride;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *transitionTime;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)direction;
- (id)hue;
- (id)init;
- (id)optionsMask;
- (id)optionsOverride;
- (id)serverSideProcessingTimeout;
- (void)setDirection:(id)arg1;
- (void)setHue:(id)arg1;
- (void)setOptionsMask:(id)arg1;
- (void)setOptionsOverride:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setTransitionTime:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)transitionTime;

@end
