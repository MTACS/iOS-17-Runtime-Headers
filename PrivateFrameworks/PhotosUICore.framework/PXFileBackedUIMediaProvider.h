
@interface PXFileBackedUIMediaProvider : PXUIMediaProvider {
    NSCache * _cache;
    NSOperationQueue * _queue;
}

- (void).cxx_destruct;
- (id)_createImageForKey:(id)arg1 error:(id*)arg2;
- (void)_handleImageCreated:(id)arg1 imageKey:(id)arg2;
- (id)_resizeImageAtURL:(id)arg1 imageUTI:(id)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 bakeInOrientation:(bool)arg4 error:(id*)arg5;
- (void)cancelImageRequest:(long long)arg1;
- (id)init;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 onlyFromCache:(bool)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x_1_1_1; struct __CFString {} *x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; bool x_1_1_5; } x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; }*)arg4;

@end
