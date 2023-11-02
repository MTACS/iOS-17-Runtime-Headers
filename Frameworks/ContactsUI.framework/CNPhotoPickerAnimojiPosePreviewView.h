
@interface CNPhotoPickerAnimojiPosePreviewView : CNPhotoPickerPreviewView {
    AVTView * _avtView;
    CAShapeLayer * _clippingLayer;
}

@property (nonatomic, readonly) AVTView *avtView;
@property (nonatomic, retain) CAShapeLayer *clippingLayer;

- (void).cxx_destruct;
- (id)avtView;
- (id)clippingLayer;
- (void)layoutSubviews;
- (void)setClippingLayer:(id)arg1;
- (void)setupPreview;
- (void)updatePoseWithConfiguration:(id)arg1;
- (void)updatePreviewWithItem:(id)arg1;

@end
