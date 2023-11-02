
@interface CSEnhancedEndpointerResult : NSObject {
    bool  _didDefaultEndpointerFire;
    bool  _didRelaxedEndpointerFire;
    float  _endpointPosterior;
    int  _extraDelayMs;
    NSArray * _featuresToLog;
}

@property (nonatomic, readonly) bool didDefaultEndpointerFire;
@property (nonatomic, readonly) bool didRelaxedEndpointerFire;
@property (nonatomic, readonly) float endpointPosterior;
@property (nonatomic, readonly) int extraDelayMs;
@property (nonatomic, retain) NSArray *featuresToLog;

- (void).cxx_destruct;
- (bool)didDefaultEndpointerFire;
- (bool)didEndpointerFire;
- (bool)didRelaxedEndpointerFire;
- (float)endpointPosterior;
- (int)extraDelayMs;
- (id)featuresToLog;
- (id)init;
- (void)setDidDefaultEndpointerFire:(bool)arg1;
- (void)setDidRelaxedEndpointerFire:(bool)arg1;
- (void)setEndpointPosterior:(float)arg1;
- (void)setExtraDelayMs:(int)arg1;
- (void)setFeaturesToLog:(id)arg1;

@end
