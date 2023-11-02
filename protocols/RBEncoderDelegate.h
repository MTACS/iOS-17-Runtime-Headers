
@protocol RBEncoderDelegate <NSObject>

@optional

- (NSData *)encodedCGFontData:(struct CGFont { }*)arg1 error:(id*)arg2;
- (NSData *)encodedFontData:(NSData *)arg1 cgFont:(struct CGFont { }*)arg2 error:(id*)arg3;
- (NSData *)encodedFontSubsetData:(NSData *)arg1 cgFont:(struct CGFont { }*)arg2 error:(id*)arg3;
- (NSData *)encodedImageData:(struct { int x1; void *x2; })arg1 error:(id*)arg2;
- (NSData *)encodedMetadata;
- (NSData *)encodedShaderLibraryData:(RBShaderLibrary *)arg1 error:(id*)arg2;
- (RBEncoderSet *)encoderSet;
- (bool)shouldEncodeFontSubset:(struct CGFont { }*)arg1;

@end
