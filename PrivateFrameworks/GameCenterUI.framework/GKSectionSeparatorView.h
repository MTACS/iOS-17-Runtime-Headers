
@interface GKSectionSeparatorView : UICollectionReusableView {
    UIView * _underlineView;
}

@property (nonatomic, retain) UIView *underlineView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUnderlineView:(id)arg1;
- (id)underlineView;

@end
