
@interface MUNearestStationRowView : MUPlaceSectionRowView {
    UIStackView * _labelStackView;
    MULoadingOverlayController * _loadingOverlayController;
    MKMapItem * _nearestStation;
    UILabel * _secondaryLabel;
    UIImageView * _stopImageView;
    UILabel * _tertiaryLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSString *distanceString;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_updateFonts;
- (void)configureWithNearestStation:(id)arg1;
- (id)distanceString;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDistanceString:(id)arg1;

@end
