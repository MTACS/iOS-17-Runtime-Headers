
@interface PXGPPTTextRenderingTester : NSObject <PXGTextureProviderDelegate> {
    PXGStringTextureProvider * _stringTextureProvider;
    PXGPPTStringsLayout * _stringsLayout;
    id /* block */  _textureProviderDidProvideCGImageHandler;
}

@property (nonatomic, retain) PXGStringTextureProvider *stringTextureProvider;
@property (nonatomic, retain) PXGPPTStringsLayout *stringsLayout;
@property (nonatomic, copy) id /* block */ textureProviderDidProvideCGImageHandler;

- (void).cxx_destruct;
- (void)runRenderTextTestWithOptions:(id)arg1 latencyMeter:(id)arg2 completionHandler:(id /* block */)arg3 failureHandler:(id /* block */)arg4;
- (void)setStringTextureProvider:(id)arg1;
- (void)setStringsLayout:(id)arg1;
- (void)setTextureProviderDidProvideCGImageHandler:(id /* block */)arg1;
- (id)stringTextureProvider;
- (id)stringsLayout;
- (void)textureProvider:(id)arg1 didProvideCGImage:(struct CGImage { }*)arg2 options:(struct { bool x1; float x2; bool x3; })arg3 adjustment:(id)arg4 isDegraded:(bool)arg5 forRequestID:(int)arg6;
- (void)textureProvider:(id)arg1 didProvideFailureWithError:(id)arg2 forRequestID:(int)arg3;
- (void)textureProvider:(id)arg1 didProvideImageData:(id)arg2 withSpecAtIndex:(long long)arg3 size:(struct CGSize { double x1; double x2; })arg4 bytesPerRow:(unsigned long long)arg5 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 forRequestID:(int)arg7;
- (void)textureProvider:(id)arg1 didProvideNothingForRequestID:(int)arg2;
- (void)textureProvider:(id)arg1 didProvidePayload:(id)arg2 forRequestID:(int)arg3;
- (void)textureProvider:(id)arg1 didProvidePixelBuffer:(struct __CVBuffer { }*)arg2 options:(struct { bool x1; float x2; bool x3; })arg3 adjustment:(id)arg4 forRequestID:(int)arg5;
- (id /* block */)textureProviderDidProvideCGImageHandler;
- (void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(id)arg1;
- (void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(id)arg1;

@end
