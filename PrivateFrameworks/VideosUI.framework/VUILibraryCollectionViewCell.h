
@interface VUILibraryCollectionViewCell : UICollectionViewCell {
    VUISeparatorView * _topSeparatorView;
    UIViewController * _viewController;
}

@property (nonatomic, retain) VUISeparatorView *topSeparatorView;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setTopSeparatorView:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)topSeparatorView;
- (id)viewController;

@end
