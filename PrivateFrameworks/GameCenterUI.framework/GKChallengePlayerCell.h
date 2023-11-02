
@interface GKChallengePlayerCell : GKDashboardPlayerCell {
    UIImageView * _chevronImageView;
    UIView * _seperatorLine;
}

@property (nonatomic, retain) UIImageView *chevronImageView;
@property (nonatomic, retain) UIView *seperatorLine;

- (void).cxx_destruct;
- (id)chevronImageView;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)seperatorLine;
- (void)setChevronImageView:(id)arg1;
- (void)setSeperatorLine:(id)arg1;

@end
