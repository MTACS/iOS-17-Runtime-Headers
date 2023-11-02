
@interface PVImageBuffer : NSObject {
    <PVImageBufferImpl> * _imageBufferImpl;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _lock;
}

// Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo

+ (id)imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1 withGainMap:(struct CGImage { }*)arg2;
+ (id)imageWithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (id)imageWithHGBitmap:(struct HGRef<HGBitmap> { struct HGBitmap {} *x1; })arg1;
+ (id)imageWithHGCVPixelBuffer:(struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer {} *x1; })arg1;
+ (id)imageWithMTLTexture:(id)arg1;
+ (id)imageWithUIImage:(id)arg1;

- (void).cxx_destruct;
- (bool)canCreateCVPixelBuffer;
- (bool)canCreateHGBitmap;
- (struct CGImage { }*)cgImage;
- (struct __CVBuffer { }*)cvPixelBuffer;
- (bool)cvPixelBufferRequiresCopy;
- (bool)cvPixelBufferRequiresRender;
- (struct __CVBuffer { }*)cvPixelBufferWithColorSpace:(id)arg1;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)description;
- (struct HGRef<HGBitmap> { struct HGBitmap {} *x1; })hgBitmap;
- (struct HGRef<HGBitmap> { struct HGBitmap {} *x1; })hgBitmapWithColorSpace:(id)arg1;
- (id)initWithImageBufferImpl:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)uiImage;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

- (id)copyOfUIImage;
- (id)copyOfUIImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)copyOfUIImageFromRectInPixels:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atSizeInPixels:(struct CGSize { double x1; double x2; })arg2;

@end
