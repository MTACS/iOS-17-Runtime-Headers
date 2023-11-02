
@interface CDPUIInheritanceAccessCodeScannerView : UIView <AVCaptureMetadataOutputObjectsDelegate> {
    AVCaptureSession * _captureSession;
    <CDPUIInheritanceAccessCodeScannerViewDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastKnownDimensions;
    AVCaptureMetadataOutput * _metadataOutput;
    AVCaptureVideoPreviewLayer * _previewLayer;
    CALayer * _spotlightLayer;
}

@property (nonatomic, retain) AVCaptureSession *captureSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CDPUIInheritanceAccessCodeScannerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } lastKnownDimensions;
@property (nonatomic, retain) AVCaptureMetadataOutput *metadataOutput;
@property (nonatomic, retain) AVCaptureVideoPreviewLayer *previewLayer;
@property (nonatomic, retain) CALayer *spotlightLayer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_bezierRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_circleRectForCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setupLivePreview;
- (void)_setupPreviewIfNeeded;
- (id)_spotOverlayLayerWithBezierRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 CircleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (id)captureSession;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })lastKnownDimensions;
- (void)layoutSubviews;
- (id)metadataOutput;
- (id)previewLayer;
- (void)setCaptureSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastKnownDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setMetadataOutput:(id)arg1;
- (void)setPreviewLayer:(id)arg1;
- (void)setSpotlightLayer:(id)arg1;
- (id)spotlightLayer;

@end
