
@interface HGDisparityUpscale : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _colorSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _depthSize;
    <MTLTexture> * _depthTex;
    <MTLDevice> * _device;
}

- (void)dealloc;
- (id)initWithDevice:(id)arg1 disparitySize:(struct CGSize { double x1; double x2; })arg2 colorSize:(struct CGSize { double x1; double x2; })arg3 portraitUtil:(id)arg4;
- (id)newTextureArrayFromTexture:(id)arg1;
- (id)upscaleDisparity:(id)arg1 inRGBA:(id)arg2 commandBuffer:(id)arg3;

@end
