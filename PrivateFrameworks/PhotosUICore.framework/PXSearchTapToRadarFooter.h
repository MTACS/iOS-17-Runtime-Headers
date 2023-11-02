
@interface PXSearchTapToRadarFooter : UICollectionReusableView {
    UILabel * _tapToRadarAppleInternalLabel;
    UILabel * _tapToRadarDescriptionLabel;
    id /* block */  _tapToRadarHandler;
}

@property (nonatomic, retain) UILabel *tapToRadarAppleInternalLabel;
@property (nonatomic, retain) UILabel *tapToRadarDescriptionLabel;
@property (nonatomic, copy) id /* block */ tapToRadarHandler;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_didSelectTapToRadarButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setTapToRadarAppleInternalLabel:(id)arg1;
- (void)setTapToRadarDescriptionLabel:(id)arg1;
- (void)setTapToRadarHandler:(id /* block */)arg1;
- (void)shouldDisplayRadarDescriptionLabel:(bool)arg1;
- (id)tapToRadarAppleInternalLabel;
- (id)tapToRadarDescriptionLabel;
- (id /* block */)tapToRadarHandler;

@end
