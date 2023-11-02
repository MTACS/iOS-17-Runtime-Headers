
@interface NTKCompanionResourceDirectoryEditor : NSObject {
    CLKDevice * _device;
    NSString * _galleryPreviewResourceDirectory;
    NSString * _resourceDirectory;
    bool  _resourceDirectoryIsHardLink;
    long long  _state;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, retain) NSString *galleryPreviewResourceDirectory;
@property (nonatomic, retain) NSString *resourceDirectory;
@property (nonatomic) long long state;

+ (id)_createResourceDirectoryWithAsset:(id)arg1 assetCollection:(id)arg2 forDevice:(id)arg3 previewOnly:(bool)arg4;
+ (id)_cropAndScaleUIImage:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
+ (void)_imageDataForAsset:(id)arg1 completion:(id /* block */)arg2;
+ (void)_imageForAsset:(id)arg1 forSize:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
+ (id)_linkPhoto:(id)arg1 to:(id)arg2 previewOnly:(bool)arg3;
+ (id)_scaleImage:(id)arg1 toLongestEdgeInPixels:(double)arg2;
+ (unsigned long long)_subsampleFactorForScale:(double)arg1;
+ (id)_subsampledImageWithData:(id)arg1 orientation:(long long)arg2 subsampleFactor:(unsigned long long)arg3;
+ (id)_transcodeAsset:(id)arg1 withCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 into:(id)arg3 previewOnly:(bool)arg4;
+ (bool)_transcodeIrisVideoOf:(id)arg1 forPhoto:(id)arg2 withCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 into:(id)arg4 previewOnly:(bool)arg5;
+ (bool)_transcodeStillImageOf:(id)arg1 forPhoto:(id)arg2 withCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 into:(id)arg4;
+ (id)_videoAssetOf:(id)arg1;
+ (struct CGSize { double x1; double x2; })_watchPhotoImageSize;
+ (struct CGSize { double x1; double x2; })_watchPhotoVideoSize;
+ (id)_writeAsset:(id)arg1 image:(id)arg2 withImageCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 to:(id)arg4;

- (void).cxx_destruct;
- (void)_deleteResourceDirectoryHardLinkIfNecessary;
- (void)dealloc;
- (id)device;
- (void)finalizeWithCompletion:(id /* block */)arg1;
- (id)galleryPreviewResourceDirectory;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(id /* block */)arg1;
- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2;
- (id)resourceDirectory;
- (void)setGalleryPreviewResourceDirectory:(id)arg1;
- (void)setResourceDirectory:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
