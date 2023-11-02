
@interface MUPlaceTileListContentView : MUPlaceSectionRowView <MUPlaceTileTemplateView> {
    UIView<MULabelViewProtocol> * _secondaryLabel;
    MUImageView * _stopImageView;
    UIView<MULabelViewProtocol> * _tertiaryLabel;
    UIImageView * _tileImageView;
    UIView<MULabelViewProtocol> * _titleLabel;
    <MUPlaceTileViewModel> * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIImageView *tileImageView;
@property (nonatomic, retain) <MUPlaceTileViewModel> *viewModel;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupViews;
- (void)_updateAppearance;
- (void)_updateFonts;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewModel:(id)arg1;
- (id)tileImageView;
- (id)viewModel;

@end
