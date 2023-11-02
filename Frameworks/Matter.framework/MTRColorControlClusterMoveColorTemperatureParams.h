
@interface MTRColorControlClusterMoveColorTemperatureParams : NSObject <NSCopying> {
    NSNumber * _colorTemperatureMaximumMireds;
    NSNumber * _colorTemperatureMinimumMireds;
    NSNumber * _moveMode;
    NSNumber * _optionsMask;
    NSNumber * _optionsOverride;
    NSNumber * _rate;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *colorTemperatureMaximumMireds;
@property (nonatomic, copy) NSNumber *colorTemperatureMinimumMireds;
@property (nonatomic, copy) NSNumber *moveMode;
@property (nonatomic, copy) NSNumber *optionsMask;
@property (nonatomic, copy) NSNumber *optionsOverride;
@property (nonatomic, copy) NSNumber *rate;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)colorTemperatureMaximumMireds;
- (id)colorTemperatureMinimumMireds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)moveMode;
- (id)optionsMask;
- (id)optionsOverride;
- (id)rate;
- (id)serverSideProcessingTimeout;
- (void)setColorTemperatureMaximumMireds:(id)arg1;
- (void)setColorTemperatureMinimumMireds:(id)arg1;
- (void)setMoveMode:(id)arg1;
- (void)setOptionsMask:(id)arg1;
- (void)setOptionsOverride:(id)arg1;
- (void)setRate:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
