
@protocol CABrightnessTransaction <NSObject>

@required

- (bool)commitBrightness:(id*)arg1;
- (bool)commitBrightness:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 7: id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (bool)forceCommitBrightness:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 7: id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)setAmbient:(float)arg1;
- (void)setBrightnessControlDisabled:(bool)arg1;
- (void)setBrightnessLimit:(float)arg1;
- (void)setContrastEnhancer:(float)arg1;
- (void)setFilteredAmbient:(float)arg1;
- (void)setHeadroom:(float)arg1;
- (void)setHighAmbientAdaptation:(float)arg1;
- (void)setLowAmbientAdaptation:(float)arg1;
- (void)setPotentialHeadroom:(float)arg1;
- (void)setSDRBrightness:(float)arg1;
- (void)setWhitePointMatrix:(const struct { float x1[9]; }*)arg1 scale:(float)arg2;

@end
