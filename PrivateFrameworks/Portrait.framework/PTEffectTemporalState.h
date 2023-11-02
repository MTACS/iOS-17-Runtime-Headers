
@interface PTEffectTemporalState : NSObject {
    <MTLTexture> * _disparityNetworkTemporalState;
    <MTLTexture> * _lastQuatersizeRGBA;
    PTMetalContext * _metalContext;
    PTUtil * _util;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)arg1 util:(id)arg2;
- (void)restoreState:(id)arg1 cvmNetwork:(id)arg2 temporalFilter:(id)arg3;
- (void)saveState:(id)arg1 cvmNetwork:(id)arg2 msrColorPyramid:(id)arg3;

@end
