
@interface HealthExperienceUI.HostViewCell : UICollectionViewCell {
    void hostView;
    void item;
    void recreateViewControllerOnHostedFeedItemChange;
    void sectionContext;
}

@property (nonatomic) bool highlighted;
@property (nonatomic) bool selected;

- (void).cxx_destruct;
- (void)didLongPress:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)prepareForReuse;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
