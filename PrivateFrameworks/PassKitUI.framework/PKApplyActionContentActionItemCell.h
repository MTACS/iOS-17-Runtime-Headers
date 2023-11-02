
@interface PKApplyActionContentActionItemCell : UICollectionViewListCell {
    PKApplyActionContentActionItem * _actionItem;
    UIImageView * _disclosureView;
    NSArray * _subtitleLabels;
    NSArray * _titleLabels;
}

@property (nonatomic, retain) PKApplyActionContentActionItem *actionItem;

+ (id)backgroundColor;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (void)_resetState;
- (id)actionItem;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setActionItem:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
