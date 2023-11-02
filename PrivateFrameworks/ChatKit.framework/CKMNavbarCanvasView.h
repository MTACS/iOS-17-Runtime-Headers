
@interface CKMNavbarCanvasView : UIView {
    UIButton * _composeButtonView;
    UISearchBar * _searchBarView;
    bool  _shouldLayoutForCollapsedWidth;
}

@property (nonatomic, readonly) UIButton *composeButtonView;
@property (nonatomic, readonly) UISearchBar *searchBarView;
@property (nonatomic) bool shouldLayoutForCollapsedWidth;

- (void).cxx_destruct;
- (void)_layoutForDisplayBelowToolbar;
- (void)_layoutForDisplayInNavbar;
- (void)clearAllItemViews;
- (id)composeButtonView;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)searchBarView;
- (void)setComposeButtonView:(id)arg1;
- (void)setSearchBarView:(id)arg1;
- (void)setShouldLayoutForCollapsedWidth:(bool)arg1;
- (bool)shouldLayoutForCollapsedWidth;

@end
