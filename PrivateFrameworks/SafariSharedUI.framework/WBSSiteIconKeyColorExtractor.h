
@interface WBSSiteIconKeyColorExtractor : NSObject

+ (char *)_createRGBAPixelBufferFromImage:(struct CGImage { }*)arg1;
+ (id)keyColorForIcon:(id)arg1;
+ (id)keyColorForIcon:(id)arg1 allowAllColors:(bool)arg2 confidence:(double*)arg3 nonTransparentConfidence:(double*)arg4 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg5;

@end
