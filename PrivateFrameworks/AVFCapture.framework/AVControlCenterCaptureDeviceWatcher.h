
@interface AVControlCenterCaptureDeviceWatcher : NSObject {
    bool  _backgroundBlurSupported;
    bool  _centerStageSupported;
    AVCaptureDeviceDiscoverySession * _discoverySession;
    id /* block */  _handler;
    bool  _micModesSupported;
    bool  _reactionEffectsSupported;
    bool  _studioLightingSupported;
}

@property (readonly) bool backgroundBlurSupported;
@property (readonly) bool centerStageSupported;
@property (readonly) bool micModesSupported;
@property (readonly) bool reactionEffectsSupported;
@property (readonly) bool studioLightingSupported;

- (bool)backgroundBlurSupported;
- (bool)centerStageSupported;
- (void)dealloc;
- (id)initWithSupportedVideoEffectsDidChangeHandler:(id /* block */)arg1;
- (bool)micModesSupported;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)reactionEffectsSupported;
- (bool)studioLightingSupported;

@end
