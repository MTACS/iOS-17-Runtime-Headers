
@interface PKBarcodeTableViewCell : UITableViewCell {
    PKBarcodeStickerView * _barcodeStickerView;
    long long  _barcodeStyle;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumBarcodeSize;
    PKPass * _pass;
}

@property (nonatomic) long long barcodeStyle;
@property (nonatomic, retain) PKPass *pass;

- (void).cxx_destruct;
- (void)_computeMaxBarcodeSize;
- (long long)barcodeStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)pass;
- (void)setBarcodeStyle:(long long)arg1;
- (void)setPass:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
