
@interface PKPassThumbnailView : UIView {
    bool  _brighten;
    UIView * _effectOverlayView;
    UIImage * _foregroundPocketOverlayImage;
    UIView * _maskView;
    bool  _modallyPresented;
    bool  _needsRasterization;
    unsigned int  _options;
    PKPass * _pass;
    UIView * _passContainerView;
    PKPassView * _passView;
    UIImageView * _pocketOverlay;
    bool  _preferMinimumHeight;
    double  _shadowVisibility;
    unsigned long long  _suppressedContent;
}

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
