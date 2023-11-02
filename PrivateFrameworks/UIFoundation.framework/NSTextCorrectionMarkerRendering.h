
@interface NSTextCorrectionMarkerRendering : NSObject

+ (id)_patternColorForSpellType_iOS:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 gap:(struct CGSize { double x1; double x2; })arg3 imageSize:(out struct CGSize { double x1; double x2; }*)arg4;
+ (id)colorForSpellType_iOS:(long long)arg1;
+ (id)colorForType:(long long)arg1 font:(id)arg2 imageSize:(out struct CGSize { double x1; double x2; }*)arg3;
+ (void)drawCorrectionMarkerOfType:(long long)arg1 font:(id)arg2 origin:(struct CGPoint { double x1; double x2; })arg3 width:(double)arg4 graphicsContext:(id)arg5;
+ (long long)textCorrectionMarkerTypeWithAttributes:(id)arg1;

@end
