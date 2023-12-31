
@interface GKShowcaseCellView : UICollectionReusableView {
    UICollectionViewCell * _cell;
    SEL  _touchedShowcaseCellAction;
    GKHairlineView * _underlineView;
}

@property (nonatomic, retain) UICollectionViewCell *cell;
@property (nonatomic) SEL touchedShowcaseCellAction;
@property (nonatomic, retain) GKHairlineView *underlineView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRectForText;
- (id)cell;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setCell:(id)arg1;
- (void)setTouchedShowcaseCellAction:(SEL)arg1;
- (void)setUnderlineView:(id)arg1;
- (SEL)touchedShowcaseCellAction;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)underlineView;

@end
