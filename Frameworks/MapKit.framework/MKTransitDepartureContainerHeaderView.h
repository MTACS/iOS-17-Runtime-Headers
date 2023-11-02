
@interface MKTransitDepartureContainerHeaderView : MKViewWithHairline {
    NSLayoutConstraint * _artworkToTitleLabelHorizontalSpacingConstraint;
    MKTransitInfoLabelView * _containerArtworkView;
    _MKUILabel * _containerTitleLabel;
    UILayoutGuide * _contentLayoutGuide;
    UIImageView * _incidentImageView;
    MKTransitDepartureContainerHeaderViewModel * _viewModel;
}

@property (nonatomic, retain) MKTransitDepartureContainerHeaderViewModel *viewModel;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_updateAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
