
@interface WLQRCodeViewController : WLQRCodeController {
    bool  _initialized;
    WLQRCode * _qrcode;
}

@property (nonatomic, retain) WLQRCode *qrcode;

- (void).cxx_destruct;
- (void)initQRCode;
- (id)qrcode;
- (void)setQrcode:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
