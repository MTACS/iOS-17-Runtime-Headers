
@interface CKDetailsSearchResultsTitleHeaderCell : CKSearchResultsTitleHeaderCell {
    CALayer * _bottomHairline;
    <CKDetailsSearchResultsTitleHeaderCellDelegate> * _detailsViewDelegate;
}

@property (nonatomic, retain) CALayer *bottomHairline;
@property (nonatomic) <CKDetailsSearchResultsTitleHeaderCellDelegate> *detailsViewDelegate;

+ (id)reuseIdentifier;
+ (id)supplementaryViewType;

- (void).cxx_destruct;
- (void)_showAllButtonTapped:(id)arg1;
- (id)bottomHairline;
- (id)detailsViewDelegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)layoutSubviewsAXFontSizeWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 isLTR:(bool)arg3;
- (void)layoutSubviewsForWolfWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 isLTR:(bool)arg3;
- (void)layoutSubviewsWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 isLTR:(bool)arg3;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)setBottomHairline:(id)arg1;
- (void)setDetailsViewDelegate:(id)arg1;
- (void)setTitle:(id)arg1;

@end
