
@interface PXSyntheticUIMediaProvider : PXUIMediaProvider {
    NSCache * _imageCache;
    NSObject<OS_dispatch_queue> * _queue;
    NSCache * _urlCache;
}

@property (nonatomic, readonly) NSCache *imageCache;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSCache *urlCache;

- (void).cxx_destruct;
- (id)_imageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 outInfo:(out id*)arg5;
- (void)cancelImageRequest:(long long)arg1;
- (id)imageCache;
- (id)init;
- (id)queue;
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 onlyFromCache:(bool)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x_1_1_1; struct __CFString {} *x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; bool x_1_1_5; } x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; }*)arg4;
- (id)urlCache;

@end
