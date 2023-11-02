
@interface WBSPhishingImageClassifierModel : NSObject <WBSPhishingImageClassifierModelProtocol> {
    unsigned long long  _cropAndScaleOption;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageInputSize;
    VNCoreMLModel * _model;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _url;
}

+ (void)configureSnapshotConfiguration:(id)arg1 cropAndScaleOption:(unsigned long long)arg2 webViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 modelInputSize:(struct CGSize { double x1; double x2; })arg4;

- (void).cxx_destruct;
- (id)_createClassifierRequest;
- (id)_createClassifierRequestHandlerWithImage:(id)arg1;
- (void)_loadModelIfNecessary;
- (bool)classifyImage:(id)arg1 enumerationBlock:(id /* block */)arg2 error:(out id*)arg3;
- (void)configureSnapshotConfiguration:(id)arg1 webViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithURL:(id)arg1 cropAndScaleOption:(unsigned long long)arg2 imageInputSize:(struct CGSize { double x1; double x2; })arg3 error:(id*)arg4;

@end
