
@interface ICDocCamUtilities : NSObject

+ (struct CGSize { double x1; double x2; })aspectFillSize:(struct CGSize { double x1; double x2; })arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
+ (struct CGSize { double x1; double x2; })aspectFitSize:(struct CGSize { double x1; double x2; })arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)buttonFromCopyingValuesFromButton:(id)arg1;
+ (void)prepareForRotationIfNecessaryWithShutterButton:(id)arg1 coodinator:(id)arg2;
+ (id)resizedImage:(id)arg1 newSize:(struct CGSize { double x1; double x2; })arg2 interpolationQuality:(int)arg3;
+ (id)resizedImage:(id)arg1 newSize:(struct CGSize { double x1; double x2; })arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 drawTransposed:(bool)arg4 interpolationQuality:(int)arg5;
+ (bool)shouldPerformCustomAnimationForTransitionCoordinator:(id)arg1 window:(id)arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForOrientation:(id)arg1 newSize:(struct CGSize { double x1; double x2; })arg2;

@end
