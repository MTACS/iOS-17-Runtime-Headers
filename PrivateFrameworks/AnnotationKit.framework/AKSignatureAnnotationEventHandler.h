
@interface AKSignatureAnnotationEventHandler : AKRectangularAnnotationEventHandler

- (bool)alwaysLockAspectRatio;
- (struct CGSize { double x1; double x2; })naturalSizeForAnnotation;

@end
