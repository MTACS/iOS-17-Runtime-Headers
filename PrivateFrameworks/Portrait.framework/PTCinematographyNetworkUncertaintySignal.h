
@interface PTCinematographyNetworkUncertaintySignal : PTCinematographyNetworkSignal {
    float  _timerSecondsDivisor;
}

@property (readonly) float timerSecondsDivisor;

- (float)_timerUncertaintyForPayload:(id)arg1;
- (id)initWithModelDictionary:(id)arg1;
- (float)timerSecondsDivisor;
- (void)writePayload:(id)arg1 toStream:(id)arg2;

@end
