
@interface CPUITitleView : UIView {
    NSLayoutConstraint * _badgeWidthConstraint;
    UILabel * _explicitLabel;
    bool  _explicitTrack;
    UIFont * _font;
    bool  _shouldUseMusicExplicitGlyph;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *explicitLabel;
@property (getter=isExplicitTrack, nonatomic) bool explicitTrack;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) bool shouldUseMusicExplicitGlyph;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_createLabelWithTextAlignment:(long long)arg1;
- (void)_updateExplicitTreatmentString;
- (id)explicitLabel;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isExplicitTrack;
- (void)setExplicitLabel:(id)arg1;
- (void)setExplicitTrack:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setShouldUseMusicExplicitGlyph:(bool)arg1;
- (void)setupConstraints;
- (bool)shouldUseMusicExplicitGlyph;
- (id)titleLabel;
- (void)updateConstraints;

@end
