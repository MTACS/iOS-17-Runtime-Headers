
@protocol PLFaceRebuildDescription <NSObject>

@required

- (<PLDetectionAdditionalDescription> *)additionalDescription;
- (double)centerX;
- (double)centerY;
- (int)cloudNameSource;
- (bool)isClusterRejected;
- (bool)isHidden;
- (bool)isManual;
- (bool)isRepresentative;
- (int)nameSource;
- (double)size;

@end
