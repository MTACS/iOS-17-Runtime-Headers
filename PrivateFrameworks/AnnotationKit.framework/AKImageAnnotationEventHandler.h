
@interface AKImageAnnotationEventHandler : AKRectangularAnnotationEventHandler

- (bool)lockAspectRatioByDefault;
- (struct CGSize { double x1; double x2; })naturalSizeForAnnotation;
- (void)updateModelWithCurrentPoint:(struct CGPoint { double x1; double x2; })arg1 options:(unsigned long long)arg2;

@end
