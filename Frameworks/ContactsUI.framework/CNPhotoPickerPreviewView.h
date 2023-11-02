
@interface CNPhotoPickerPreviewView : UIView {
    CAShapeLayer * _clippingLayer;
    UIView * _previewView;
    UIView * _thumbnailContentView;
}

@property (nonatomic, retain) CAShapeLayer *clippingLayer;
@property (nonatomic, readonly) UIView *previewView;
@property (nonatomic, retain) UIView *thumbnailContentView;

+ (id)pickerPreviewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forItem:(id)arg2;

- (void).cxx_destruct;
- (id)clippingLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)previewView;
- (void)setClippingLayer:(id)arg1;
- (void)setThumbnailContentView:(id)arg1;
- (void)setupPreview;
- (id)thumbnailContentView;
- (void)updatePreviewWithItem:(id)arg1;

@end
