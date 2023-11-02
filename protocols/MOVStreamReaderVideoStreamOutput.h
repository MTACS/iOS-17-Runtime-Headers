
@protocol MOVStreamReaderVideoStreamOutput <MOVStreamReaderSampleStreamOutput>

@required

- (struct __CVBuffer { }*)copyNextFrameForStreamTimestamp:(out struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 error:(out id*)arg2;
- (unsigned int)getOutputPixelFormatForStream;
- (struct __CVBuffer { }*)nextPixelBufferForStreamAttachementsData:(out id*)arg1 timestamp:(out struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 error:(out id*)arg3;
- (unsigned int)pixelFormatForStream;
- (void)removePixelBufferPadding:(bool)arg1;
- (unsigned long long)trackTypeInfo;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
