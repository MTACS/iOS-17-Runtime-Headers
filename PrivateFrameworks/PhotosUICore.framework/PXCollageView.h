
@interface PXCollageView : UIView {
    NSPointerArray * __imageSizes;
    NSArray * __imageViews;
    PXRoundedCornerOverlayView * __roundedCornerOverlayView;
    UIColor * _cornerBackgroundColor;
    double  _cornerRadius;
    double  _imageCornerRadius;
    PXLayoutPerformerOutput * _layoutOutput;
    long long  _numberOfItems;
    double  _spacing;
}

@property (nonatomic, readonly) NSPointerArray *_imageSizes;
@property (nonatomic, readonly) NSArray *_imageViews;
@property (nonatomic, retain) PXRoundedCornerOverlayView *_roundedCornerOverlayView;
@property (nonatomic, copy) UIColor *cornerBackgroundColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double imageCornerRadius;
@property (nonatomic, retain) PXLayoutPerformerOutput *layoutOutput;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) double spacing;

+ (long long)maximumNumberOfItems;

- (void).cxx_destruct;
- (id)_imageSizes;
- (id)_imageViews;
- (id)_roundedCornerOverlayView;
- (void)_updateImageViews;
- (void)_updateRoundedCornerOverlayView;
- (id)cornerBackgroundColor;
- (double)cornerRadius;
- (double)imageCornerRadius;
- (struct CGSize { double x1; double x2; })imageSizeForItemAtIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutOutput;
- (void)layoutSubviews;
- (long long)numberOfItems;
- (void)setCornerBackgroundColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setImageCornerRadius:(double)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1 forItemAtIndex:(long long)arg2;
- (void)setLayoutOutput:(id)arg1;
- (void)setNumberOfItems:(long long)arg1;
- (void)setSpacing:(double)arg1;
- (void)set_roundedCornerOverlayView:(id)arg1;
- (double)spacing;

@end
