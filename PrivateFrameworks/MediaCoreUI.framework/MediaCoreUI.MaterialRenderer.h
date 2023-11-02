
@interface MediaCoreUI.MaterialRenderer : NSObject <MTKViewDelegate> {
    void $__lazy_storage_$_isBlurDisabled;
    void contentMode;
    void context;
    void resizeTexture;
    void textureFallbackCopyAllocator;
    void textureProvider;
}

- (void).cxx_destruct;
- (void)drawInMTKView:(id)arg1;
- (id)init;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize { double x1; double x2; })arg2;

@end
