
@interface CKMediaObjectImageProvider : PXUIMediaProvider <PXUIImageProvider> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_activeRequestIDsByTransferGUID;
    NSMutableDictionary * _lock_mediaObjectsPendingTransferFinalizationByRequestID;
    NSMutableDictionary * _lock_requestDetailsByRequestID;
    UIImage * _testImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfOutstandingHandlers;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *testImage;

- (void).cxx_destruct;
- (void)_handleFileTransferDidChangeNotification:(id)arg1;
- (void)_handlePreviewDidChangeNotification:(id)arg1;
- (id)_imagePreviewForMediaObject:(id)arg1 isSynchronous:(bool)arg2 requestID:(long long)arg3;
- (bool)_lock_cancelImageRequest:(long long)arg1;
- (id)_lock_imagePreviewForMediaObject:(id)arg1 isSynchronous:(bool)arg2 requestID:(long long)arg3;
- (void)cancelImageRequest:(long long)arg1;
- (id)init;
- (long long)numberOfOutstandingHandlers;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)setTestImage:(id)arg1;
- (id)testImage;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 onlyFromCache:(bool)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x_1_1_1; struct __CFString {} *x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; bool x_1_1_5; } x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; }*)arg4;

@end
