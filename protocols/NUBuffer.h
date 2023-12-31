
@protocol NUBuffer <NSObject>

@required

- (const void*)bytes;
- (const void*)bytesAtPoint:(struct { long long x1; long long x2; })arg1;
- (NUPixelFormat *)format;
- (long long)rowBytes;
- (struct { long long x1; long long x2; })size;

@end
