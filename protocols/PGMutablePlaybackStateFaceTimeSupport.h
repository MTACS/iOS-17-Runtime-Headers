
@protocol PGMutablePlaybackStateFaceTimeSupport <NSObject>

@required

- (bool)canSwitchCamera;
- (bool)disablesLayerCloning;
- (bool)isCameraActive;
- (bool)isMicrophoneMuted;
- (void)setCameraActive:(bool)arg1;
- (void)setCanSwitchCamera:(bool)arg1;
- (void)setDisablesLayerCloning:(bool)arg1;
- (void)setMicrophoneMuted:(bool)arg1;
- (void)setSupportsFaceTimeActions:(bool)arg1;
- (bool)supportsFaceTimeActions;

@end
