
@interface VUILibraryMenuItemViewCell : VUIListCollectionViewCell {
    VUIVideosImageView * _accessoryView;
    VUISeparatorView * _bottomSeparatorView;
    bool  _hideChevron;
    NSString * _imageName;
    VUIVideosImageView * _imageView;
    bool  _shouldAppearAsHeader;
    NSString * _title;
    VUILabel * _titleLabel;
    VUISeparatorView * _topSeparatorView;
}

@property (nonatomic, readonly) VUISeparatorView *bottomSeparatorView;
@property (nonatomic) bool hideChevron;
@property (nonatomic, retain) NSString *imageName;
@property (nonatomic) bool shouldAppearAsHeader;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) VUILabel *titleLabel;
@property (nonatomic, retain) VUISeparatorView *topSeparatorView;

- (void).cxx_destruct;
- (id)bottomSeparatorView;
- (bool)hasImage;
- (bool)hideChevron;
- (id)imageName;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setHideChevron:(bool)arg1;
- (void)setImageName:(id)arg1;
- (void)setShouldAppearAsHeader:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopSeparatorView:(id)arg1;
- (bool)shouldAppearAsHeader;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)titleLabel;
- (id)topSeparatorView;

@end
