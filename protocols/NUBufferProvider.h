
@protocol NUBufferProvider <NSObject>

@required

- (NUPixelFormat *)format;
- (void)provideBuffer:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NUBuffer> *, void*
- (struct { long long x1; long long x2; })size;

@end
