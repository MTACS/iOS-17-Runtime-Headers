
@interface PKPassPaymentCardFrontFaceView : PKPassFrontFaceView {
    bool  _accountIsActive;
    bool  _accountSupportsTopUp;
    PKBackdropView * _backdropView;
    UILabel * _balanceLabel;
    PKBarcodeStickerView * _bottomBarcodeView;
    UIImageView * _compactBankLogoView;
    UIButton * _fullScreenButton;
    NSMutableArray * _oldBottomBarcodeViews;
    NSMutableArray * _oldTopBarcodeViews;
    UIView * _scrimView;
    PKBarcodeStickerView * _topBarcodeView;
}

- (void).cxx_destruct;
- (double)_barcodePadding;
- (struct CGSize { double x1; double x2; })_barcodeSize;
- (id)_filterAuxiliaryField:(id)arg1;
- (id)_filterSecondaryField:(id)arg1;
- (void)_handleAccountChanged:(id)arg1;
- (void)_handlePeerPaymentAccountChanged:(id)arg1;
- (void)_initializeBalanceLabelWithTextColor:(id)arg1;
- (void)_showFullScreenBarcodeForButton:(id)arg1;
- (void)_updateAccountBalanceVisibilityAnimated:(bool)arg1;
- (void)_updateBalanceLabelFontSize;
- (void)_updateBalanceWithAmount:(id)arg1;
- (void)_updateStateForAccount:(id)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)createBodyContentViews;
- (void)createHeaderContentViews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setDynamicBarcodeData:(id)arg1;
- (void)setModallyPresented:(bool)arg1;
- (void)setShowsLiveBalance:(bool)arg1;
- (void)setViewExpanded:(bool)arg1;
- (bool)showsShare;
- (id)templateForHeaderBucket;
- (id)templateForLayoutMode:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
