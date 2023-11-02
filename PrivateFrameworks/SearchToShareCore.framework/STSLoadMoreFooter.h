
@interface STSLoadMoreFooter : UICollectionReusableView {
    UIActivityIndicatorView * _activityIndicator;
    <STSLoadMoreFooterDelegate> * _delegate;
    bool  _loading;
    UIImageView * _providerIconView;
    UIImage * _searchProviderImage;
}

@property (nonatomic) <STSLoadMoreFooterDelegate> *delegate;
@property (getter=isLoading, nonatomic) bool loading;
@property (nonatomic, retain) UIImage *searchProviderImage;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (void)_handleLogoTap:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLoading;
- (void)layoutSubviews;
- (id)searchProviderImage;
- (void)setDelegate:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setSearchProviderImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
