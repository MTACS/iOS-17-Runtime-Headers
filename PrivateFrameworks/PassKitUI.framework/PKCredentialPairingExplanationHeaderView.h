
@interface PKCredentialPairingExplanationHeaderView : UIView {
    UIVisualEffectView * _blurView;
    PKSubcredentialPairingFlowControllerContext * _context;
    UIImageView * _imageView;
    UIActivityIndicatorView * _spinner;
    bool  _useCompactLayout;
}

@property (nonatomic) bool useCompactLayout;

- (void).cxx_destruct;
- (id)_fallbackPairingImage;
- (void)_loadPairingImage;
- (void)_setPairingImage:(id)arg1;
- (void)_showLoadingContent;
- (id)initWithContext:(id)arg1;
- (void)layoutSubviews;
- (void)setUseCompactLayout:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useCompactLayout;

@end
