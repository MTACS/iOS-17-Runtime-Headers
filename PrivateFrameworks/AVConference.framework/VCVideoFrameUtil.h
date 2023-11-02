
@interface VCVideoFrameUtil : NSObject

+ (struct { long long x1; int x2; unsigned int x3; long long x4; })CMTimeFromXPCDictionary:(id)arg1;
+ (struct __CVBuffer { }*)newCVPixelBufferFromXPCDictionary:(id)arg1 isDepth:(bool)arg2;
+ (id)newXPCDictionaryWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 depthPixelBuffer:(struct __CVBuffer { }*)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;

@end
