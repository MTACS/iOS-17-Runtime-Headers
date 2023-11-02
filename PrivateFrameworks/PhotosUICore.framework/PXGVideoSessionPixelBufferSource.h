
@interface PXGVideoSessionPixelBufferSource : NSObject <PXChangeObserver, PXGDisplayAssetPixelBufferSource> {
    NSString * _bufferRequestIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxOutputSize;
    id /* block */  _pixelBufferDidChangeHandler;
    id /* block */  _providePlaceholderHandler;
    PXVideoSession * _videoSession;
}

@property (nonatomic, readonly) struct __CVBuffer { }*currentPixelBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maxOutputSize;
@property (nonatomic, copy) id /* block */ pixelBufferDidChangeHandler;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (nonatomic, copy) id /* block */ providePlaceholderHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXVideoSession *videoSession;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)currentPixelBuffer;
- (void)dealloc;
- (id)init;
- (id)initWithVideoSession:(id)arg1 maxOutputSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })maxOutputSize;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id /* block */)pixelBufferDidChangeHandler;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (id /* block */)providePlaceholderHandler;
- (void)setPixelBufferDidChangeHandler:(id /* block */)arg1;
- (void)setProvidePlaceholderHandler:(id /* block */)arg1;
- (id)videoSession;

@end
