
@interface PKMerchantTokenIconView : UIImageView {
    double  _cornerRadius;
    UIImage * _image;
    NSURLSessionDataTask * _imageDownloadTask;
    UILabel * _monogramLabel;
}

- (void).cxx_destruct;
- (void)_cancelImageDownload;
- (void)_downloadImageFromURL:(id)arg1;
- (void)_setUpConstraints;
- (void)_setUpMonogramLabel;
- (void)_setUpSelf;
- (void)_setUpViews;
- (void)_updateIconImage;
- (void)_updateMonogramLabelWithText:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateWithImage:(id)arg1 cornerRadius:(double)arg2;
- (void)updateWithImageURL:(id)arg1 monogramText:(id)arg2 cornerRadius:(double)arg3;

@end
