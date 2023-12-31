
@protocol NUImage <NSObject, NUImageCopying>

@required

- (NUColorSpace *)colorSpace;
- (NUPixelFormat *)format;
- (NUImageLayout *)layout;
- (struct { long long x1; long long x2; })size;
- (NURegion *)validRegion;

@end
