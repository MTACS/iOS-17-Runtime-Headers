
@interface CPSAppClipUnavailableView : UIView {
    CPSButton * _fallbackOpenButton;
    id /* block */  _fallbackURLAction;
    CPSVibrantLabel * _reasonLabel;
}

@property (nonatomic) NSString *reasonString;

- (void).cxx_destruct;
- (void)_openButtonTapped:(id)arg1;
- (void)_setUpViews;
- (void)enableURLFallbackWithAction:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)reasonString;
- (void)setReasonString:(id)arg1;

@end
