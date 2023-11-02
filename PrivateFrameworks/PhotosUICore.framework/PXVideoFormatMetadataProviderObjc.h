
@interface PXVideoFormatMetadataProviderObjc : NSObject {
    _TtC12PhotosUICore29PXVideoFormatMetadataProvider * _metadataProvider;
}

@property (nonatomic, retain) _TtC12PhotosUICore29PXVideoFormatMetadataProvider *metadataProvider;

- (void).cxx_destruct;
- (void)cancelActiveRequest;
- (id)initWithImageManager:(id)arg1;
- (id)metadataProvider;
- (void)requestVideoMetadataForItem:(id)arg1 processingQueue:(id)arg2 callbackQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)setMetadataProvider:(id)arg1;

@end
