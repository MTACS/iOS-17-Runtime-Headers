
@protocol NUImageStorage <NUMutableBufferProvider>

@required

- (void)assertIsValidInRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)assertIsValidInRegion:(NURegion *)arg1;
- (NUColorSpace *)colorSpace;
- (long long)copyFromStorage:(id <NUImageStorage>)arg1 region:(NURegion *)arg2;
- (long long)fillBufferWithPattern4:(unsigned int)arg1;
- (NUPixelFormat *)format;
- (void)invalidate;
- (bool)isValidInRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (bool)isValidInRegion:(NURegion *)arg1;
- (long long)readBufferInRegion:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: NURegion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NUBuffer> *, void*
- (void)setColorSpace:(NUColorSpace *)arg1;
- (struct { long long x1; long long x2; })size;
- (long long)sizeInBytes;
- (long long)useAsCIImageWithOptions:(void *)arg1 renderer:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, <NURenderer> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CIImage *, void*
- (long long)useAsCIRenderDestinationWithRenderer:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: <NURenderer> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, CIRenderDestination *, void*
- (long long)useAsCVPixelBufferWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NUCVPixelBuffer *, void*
- (NURegion *)validRegion;
- (void)validateRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)validateRegion:(NURegion *)arg1;
- (long long)writeBufferInRegion:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: NURegion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NUMutableBuffer> *, void*

@end
