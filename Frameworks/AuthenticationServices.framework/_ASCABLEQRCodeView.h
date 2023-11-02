
@interface _ASCABLEQRCodeView : UIView {
    _ASCABLEQRCodeBadgeView * _badgeView;
    _ASCABLEQRCodeImageView * _imageView;
    NSString * _message;
    UIView * _platterView;
}

- (void).cxx_destruct;
- (id)_qrCodeASImage;
- (id)_qrCodeCIImage;
- (id)_qrCodeColor;
- (void)_updatePlatterBorderStyle;
- (void)_updateQRCodeImage;
- (id)initWithMessage:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;

@end
