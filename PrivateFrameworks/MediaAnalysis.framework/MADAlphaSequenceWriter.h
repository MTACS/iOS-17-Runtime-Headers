
@interface MADAlphaSequenceWriter : NSObject

+ (id)transcodeSequenceData:(id)arg1 maxDimension:(unsigned long long)arg2 outputWidth:(unsigned long long*)arg3 outputHeight:(unsigned long long*)arg4;
+ (id)writerWithUniformTypeIdentifier:(id)arg1 frameCount:(unsigned long long)arg2 crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;

- (int)addPixelBuffer:(struct __CVBuffer { }*)arg1 withTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)finishWithEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
