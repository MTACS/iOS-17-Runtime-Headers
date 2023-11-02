
@interface PTVFXSoftAlphaMask : NSObject {
    <MTLTexture> * _alphaMask;
    <MTLComputePipelineState> * _boxFilterHorizontal;
    <MTLComputePipelineState> * _boxFilterVertical;
    <MTLComputePipelineState> * _disparityToAlphaMask;
    <MTLTexture> * _intermediateTextureBox;
    <MTLTexture> * _intermediateTextureMask;
    PTUtil * _util;
}

@property (readonly) <MTLTexture> *alphaMask;

- (void).cxx_destruct;
- (id)alphaMask;
- (int)boxFilter:(id)arg1 mask:(id)arg2;
- (id)initWithMetalContext:(id)arg1 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (int)updateSoftAlphaMask:(id)arg1 inDisparity:(id)arg2 focusDisparityModifiers:(id)arg3;
- (int)updateSoftAlphaMask:(id)arg1 inSegmentation:(id)arg2;

@end
