
@interface PKPayLaterFinancingPlanFundingSourceCell : UICollectionViewListCell {
    UILabel * _detailLabel;
    PKPayLaterFinancingPlanFundingSource * _fundingSource;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    UIImageView * _imageView;
    PKPassLibrary * _passLibrary;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) PKPayLaterFinancingPlanFundingSource *fundingSource;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (void)_populateIconForFundingSource;
- (void)_updateText;
- (id)fundingSource;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setFundingSource:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
