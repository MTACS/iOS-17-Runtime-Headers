
@interface PKBarcodeStickerView : UIButton {
    double  _altContentInset;
    UIImage * _altImage;
    UIImageView * _altImageView;
    double  _altTextInset;
    UILabel * _altTextLabel;
    PKBarcode * _barcode;
    UIImage * _barcodeImage;
    UIImageView * _barcodeView;
    bool  _barcodeViewInvalidated;
    struct CGSize { 
        double width; 
        double height; 
    }  _desiredBarcodeSize;
    bool  _drawBarcode;
    NSMutableArray * _matteConstraints;
    UIImageView * _matteView;
    long long  _passStyle;
    bool  _shouldMatteCode;
    NSMutableArray * _stickerConstraints;
    long long  _validity;
}

@property (nonatomic, retain) UIImage *altImage;
@property (nonatomic) UIFont *altTextFont;
@property (nonatomic) double altTextInset;
@property (nonatomic) struct CGSize { double x1; double x2; } desiredBarcodeSize;
@property (nonatomic) bool shouldMatteCode;
@property (nonatomic) long long validity;

+ (struct PKBarcodeQuietZone { double x1; double x2; double x3; double x4; })_quietZoneForBarcode:(id)arg1;
+ (struct CGSize { double x1; double x2; })_sizeForBarcode:(id)arg1 passStyle:(long long)arg2;
+ (long long)validityStateForPass:(id)arg1;

- (void).cxx_destruct;
- (void)_generateMatteRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 barcodeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 altContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 boundingSize:(struct CGSize { double x1; double x2; })arg4;
- (id)_resizedBarcode:(id)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_setupAltImageView;
- (void)_setupAltTextLabel;
- (void)_updateDrawBarcode;
- (void)_updateMatteViewHiding;
- (void)_updateValidity;
- (struct CGSize { double x1; double x2; })_varianceForBarcode:(id)arg1;
- (id)altImage;
- (id)altTextFont;
- (double)altTextInset;
- (id)barcodeImage;
- (struct CGSize { double x1; double x2; })desiredBarcodeSize;
- (id)initWithBarcode:(id)arg1 validityState:(long long)arg2;
- (id)initWithBarcode:(id)arg1 validityState:(long long)arg2 passStyle:(long long)arg3;
- (void)layoutSubviews;
- (void)setAltImage:(id)arg1;
- (void)setAltTextFont:(id)arg1;
- (void)setAltTextInset:(double)arg1;
- (void)setDesiredBarcodeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldMatteCode:(bool)arg1;
- (void)setValidity:(long long)arg1;
- (bool)shouldMatteCode;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)validity;

@end
