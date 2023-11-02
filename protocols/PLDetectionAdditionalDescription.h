
@protocol PLDetectionAdditionalDescription <NSObject>

@required

- (double)bodyCenterX;
- (double)bodyCenterY;
- (double)bodyHeight;
- (double)bodyWidth;
- (NSNumber *)detectionType;

@end
