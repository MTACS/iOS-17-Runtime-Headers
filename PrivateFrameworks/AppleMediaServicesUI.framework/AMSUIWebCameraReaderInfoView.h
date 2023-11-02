
@interface AMSUIWebCameraReaderInfoView : AMSUICommonView {
    UIButton * _bottomLink;
    <AMSUIWebActionRunnable> * _bottomLinkAction;
    UILabel * _primaryLabel;
    UILabel * _secondaryLabel;
}

@property (nonatomic, retain) UIButton *bottomLink;
@property (nonatomic, retain) <AMSUIWebActionRunnable> *bottomLinkAction;
@property (nonatomic, retain) UILabel *primaryLabel;
@property (nonatomic, retain) UILabel *secondaryLabel;

- (void).cxx_destruct;
- (void)_bottomLinkSelected:(id)arg1;
- (id)_createButtonWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)_createLabelWithLines:(long long)arg1 title:(bool)arg2;
- (id)bottomLink;
- (id)bottomLinkAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)primaryLabel;
- (id)secondaryLabel;
- (void)setBottomLink:(id)arg1;
- (void)setBottomLinkAction:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;

@end
