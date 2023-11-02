
@interface PhotosUICore.PXVideoFormatMetadataProvider : NSObject {
    void activeRequestID;
    void imageManager;
}

- (void).cxx_destruct;
- (void)cancelActiveRequest;
- (id)init;
- (id)initWithImageManager:(id)arg1;
- (void)requestVideoMetadataFor:(id)arg1 processingQueue:(id)arg2 callbackQueue:(id)arg3 completion:(id /* block */)arg4;

@end
