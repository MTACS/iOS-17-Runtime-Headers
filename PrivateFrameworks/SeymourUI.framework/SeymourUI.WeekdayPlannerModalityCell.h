
@interface SeymourUI.WeekdayPlannerModalityCell : UICollectionViewListCell {
    void delegate;
    void iconView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void separator;
    void separatorHeightConstraint;
    void styleProvider;
    void subtitleLabel;
    void titleLabel;
}

@property (nonatomic) bool highlighted;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)prepareForReuse;
- (void)setHighlighted:(bool)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
