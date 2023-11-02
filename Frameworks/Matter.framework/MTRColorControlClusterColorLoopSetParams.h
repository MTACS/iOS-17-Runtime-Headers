
@interface MTRColorControlClusterColorLoopSetParams : NSObject <NSCopying> {
    NSNumber * _action;
    NSNumber * _direction;
    NSNumber * _optionsMask;
    NSNumber * _optionsOverride;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _startHue;
    NSNumber * _time;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _updateFlags;
}

@property (nonatomic, copy) NSNumber *action;
@property (nonatomic, copy) NSNumber *direction;
@property (nonatomic, copy) NSNumber *optionsMask;
@property (nonatomic, copy) NSNumber *optionsOverride;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *startHue;
@property (nonatomic, copy) NSNumber *time;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *updateFlags;

- (void).cxx_destruct;
- (id)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)direction;
- (id)init;
- (id)optionsMask;
- (id)optionsOverride;
- (id)serverSideProcessingTimeout;
- (void)setAction:(id)arg1;
- (void)setDirection:(id)arg1;
- (void)setOptionsMask:(id)arg1;
- (void)setOptionsOverride:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setStartHue:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setUpdateFlags:(id)arg1;
- (id)startHue;
- (id)time;
- (id)timedInvokeTimeoutMs;
- (id)updateFlags;

@end
