
@interface PKPeerPaymentIconEducationView : UIView {
    PKPaymentSetupInitialCardEducationIconsView * _iconsView;
    bool  _showIconsView;
    bool  _showWatchView;
    PKWatchDeviceImageOverlayView * _watchDeviceImageView;
}

@property (nonatomic) bool showIconsView;
@property (nonatomic) bool showWatchView;

- (void).cxx_destruct;
- (id)_imageForWatchView;
- (void)layoutSubviews;
- (void)setShowIconsView:(bool)arg1;
- (void)setShowWatchView:(bool)arg1;
- (bool)showIconsView;
- (bool)showWatchView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
