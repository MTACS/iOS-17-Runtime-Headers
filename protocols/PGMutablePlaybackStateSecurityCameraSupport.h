
@protocol PGMutablePlaybackStateSecurityCameraSupport <NSObject>

@required

- (bool)cameraHasMicrophone;
- (bool)disablesLayerCloning;
- (void)setCameraHasMicrophone:(bool)arg1;
- (void)setDisablesLayerCloning:(bool)arg1;

@end
