
@interface PKPaymentBarcodeViewController : UIViewController {
    NSData * _barcodeData;
    UILayoutGuide * _barcodeGuide;
    PKRightAngleRotatingView * _barcodeView;
    UIButton * _closeButton;
    UIImageView * _compactBankLogoView;
    UILabel * _disclaimerText;
    PKPaymentPass * _pass;
    struct { 
        double barcodeTopPadding; 
        double disclaimerToBarcodePadding; 
        double disclaimerSidePadding; 
        double bankToDisclaimerPadding; 
        double altTextInset; 
    }  _viewSizeInfo;
}

@property (nonatomic, retain) NSData *barcodeData;

- (void).cxx_destruct;
- (struct { double x1; double x2; double x3; double x4; double x5; })_barcodePadding;
- (struct CGSize { double x1; double x2; })_barcodeSize;
- (bool)_canShowWhileLocked;
- (void)_closeButtonPressed:(id)arg1;
- (id)barcodeData;
- (id)initWithPass:(id)arg1;
- (void)invalidate;
- (void)setBarcodeData:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
