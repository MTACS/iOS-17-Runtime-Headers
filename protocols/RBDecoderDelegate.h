
@protocol RBDecoderDelegate <NSObject>

@optional

- (struct CGFont { }*)decodedCGFontWithData:(NSData *)arg1 error:(id*)arg2;
- (void*)decodedImageContentsWithData:(NSData *)arg1 type:(int*)arg2 error:(id*)arg3;
- (void)decodedMetadata:(NSData *)arg1;
- (RBShaderLibrary *)decodedShaderLibraryWithData:(NSData *)arg1 error:(id*)arg2;

@end
