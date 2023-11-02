
@interface FAFamilyHeaderView : UIView {
    UILabel * _familyHeaderLabel;
    FAMugshotMarqueeView * _mugShots;
}

@property (nonatomic, readonly) UILabel *familyHeaderLabel;

- (void).cxx_destruct;
- (id)familyHeaderLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFamilyCircle:(id)arg1 profilePictureStore:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
