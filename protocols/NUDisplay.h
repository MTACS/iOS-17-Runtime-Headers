
@protocol NUDisplay <NSObject>

@required

- (NUColorSpace *)colorSpace;
- (id)identifier;
- (NSString *)name;
- (NUPixelFormat *)pixelFormat;
- (struct { long long x1; long long x2; })size;

@end
