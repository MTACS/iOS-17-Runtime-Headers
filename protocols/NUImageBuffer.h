
@protocol NUImageBuffer <NSObject>

@required

- (struct __CVBuffer { }*)CVPixelBuffer;
- (NUColorSpace *)colorSpace;
- (NUPixelFormat *)format;
- (struct { long long x1; long long x2; })size;

@end
