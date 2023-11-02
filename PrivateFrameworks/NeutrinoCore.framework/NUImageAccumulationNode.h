
@interface NUImageAccumulationNode : NURenderNode {
    NUColorSpace * _colorSpace;
    <NUMutablePurgeableImage> * _image;
    struct { 
        long long width; 
        long long height; 
    }  _imageSize;
    NUImageLayout * _layout;
    NUPixelFormat * _pixelFormat;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NUColorSpace *colorSpace;
@property (nonatomic, readonly) <NUMutablePurgeableImage> *image;
@property (nonatomic, readonly) struct { long long x1; long long x2; } imageSize;
@property (nonatomic, readonly) NUImageLayout *layout;
@property (nonatomic, readonly) NUPixelFormat *pixelFormat;

- (void).cxx_destruct;
- (id)_image;
- (id)_newImage;
- (id)colorSpace;
- (id)debugQuickLookObject;
- (id)image;
- (struct { long long x1; long long x2; })imageSize;
- (id)initWithImageSize:(struct { long long x1; long long x2; })arg1 tileSize:(struct { long long x1; long long x2; })arg2 borderSize:(struct { long long x1; long long x2; })arg3 pixelFormat:(id)arg4 colorSpace:(id)arg5 input:(id)arg6;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)layout;
- (id)pixelFormat;

@end
