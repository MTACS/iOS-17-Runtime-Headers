
@interface PKPassHeaderViewCell : UICollectionViewListCell {
    PKPass * _pass;
    PKPassHeaderView * _passHeaderView;
    <PKPassLibraryDataProvider> * _passLibraryOverride;
}

@property (nonatomic, retain) PKPass *pass;
@property (nonatomic, retain) <PKPassLibraryDataProvider> *passLibraryOverride;

- (void).cxx_destruct;
- (void)_configurePassHeader;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (void)layoutSubviews;
- (id)pass;
- (id)passLibraryOverride;
- (void)setPass:(id)arg1;
- (void)setPassLibraryOverride:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
