
@interface PKMetalUtility : NSObject

+ (struct CGSize { double x1; double x2; })clampedPixelSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)defaultDevice;
+ (bool)deviceSupportsFramebufferFetch:(id)arg1;
+ (bool)deviceSupportsMemorylessFramebuffers:(id)arg1;
+ (bool)isMetalAvailable;
+ (double)layerContentsScale;
+ (id)textureFromImage:(struct CGImage { }*)arg1 device:(id)arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformConvertingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 percent:(double)arg3;

@end
