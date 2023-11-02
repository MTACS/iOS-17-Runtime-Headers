
@interface MKExploreGuidesView : UIView {
    UIButton * _button;
    UIView * _contentView;
    UIFont * _defaultTitleFont;
    GEOExploreGuides * _exploreGuide;
    UIImageView * _imageView;
    UIStackView * _labelsStack;
    UIFont * _maxSupportedTitleFont;
    UILabel * _subtitleLabel;
    id /* block */  _tapHandler;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIFont *defaultTitleFont;
@property (nonatomic, retain) GEOExploreGuides *exploreGuide;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIStackView *labelsStack;
@property (nonatomic, retain) UIFont *maxSupportedTitleFont;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, copy) id /* block */ tapHandler;
@property (nonatomic, retain) UILabel *titleLabel;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (id)button;
- (id)contentView;
- (id)defaultTitleFont;
- (void)didSelectExploreGuides:(id)arg1;
- (id)exploreGuide;
- (id)imageView;
- (id)initWithExploreGuides:(id)arg1 tapHandler:(id /* block */)arg2;
- (id)labelsStack;
- (id)maxSupportedTitleFont;
- (void)setButton:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDefaultTitleFont:(id)arg1;
- (void)setExploreGuide:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLabelsStack:(id)arg1;
- (void)setMaxSupportedTitleFont:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTapHandler:(id /* block */)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setupConstraints;
- (void)setupImage;
- (void)setupSubviews;
- (id)subtitleLabel;
- (id /* block */)tapHandler;
- (id)titleLabel;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;
- (void)updateExploreGuide:(id)arg1;
- (void)updateUI;

@end
