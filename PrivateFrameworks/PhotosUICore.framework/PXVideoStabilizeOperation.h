
@interface PXVideoStabilizeOperation : PXVideoProcessingOperation {
    NUImagePropertiesRequest * _imagePropertiesRequest;
    PLPhotoEditRenderer * _renderer;
    PIVideoStabilizeRequest * _stabilizeRequest;
}

@property (nonatomic, readonly) <PXVideoStabilizeResult> *result;
@property (nonatomic, readonly) PXVideoStabilizeOperationSpec *spec;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithSpec:(id)arg1;
- (id)performProcessing;

@end
