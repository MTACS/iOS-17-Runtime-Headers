
@protocol PXGDisplayAssetPixelBufferSource <NSObject>

@required

- (struct __CVBuffer { }*)currentPixelBuffer;
- (id /* block */)pixelBufferDidChangeHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (id /* block */)providePlaceholderHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)setPixelBufferDidChangeHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setProvidePlaceholderHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
