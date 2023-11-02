
@interface MTRColorControlClusterMoveToColorTemperatureParams : NSObject <NSCopying> {
    NSNumber * _colorTemperatureMireds;
    NSNumber * _optionsMask;
    NSNumber * _optionsOverride;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _transitionTime;
}

@property (nonatomic, copy) NSNumber *colorTemperature;
@property (nonatomic, copy) NSNumber *colorTemperatureMireds;
@property (nonatomic, copy) NSNumber *optionsMask;
@property (nonatomic, copy) NSNumber *optionsOverride;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *transitionTime;

- (void).cxx_destruct;
- (id)colorTemperature;
- (id)colorTemperatureMireds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)optionsMask;
- (id)optionsOverride;
- (id)serverSideProcessingTimeout;
- (void)setColorTemperature:(id)arg1;
- (void)setColorTemperatureMireds:(id)arg1;
- (void)setOptionsMask:(id)arg1;
- (void)setOptionsOverride:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setTransitionTime:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)transitionTime;

@end
