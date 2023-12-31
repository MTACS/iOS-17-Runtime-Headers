
@interface PKContinuityPaymentFaviconView : UIView {
    UIView * _imageShadowView;
    UIImageView * _imageView;
    UIImageView * _macImageView;
    PKShapeView * _maskView;
    NSString * _merchantName;
    NSString * _modelIdentifier;
    UIView * _monogramView;
    NSURLSession * _urlSession;
}

- (void).cxx_destruct;
- (double)_iconVerticalOffset;
- (void)_loadMacImage;
- (void)_setupMonogram;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 URL:(id)arg2 modelIdentifier:(id)arg3 merchantName:(id)arg4;
- (void)layoutSubviews;

@end
