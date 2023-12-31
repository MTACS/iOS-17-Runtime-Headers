
@interface GKButtonView : UICollectionReusableView {
    SEL  _action;
    UIButton * _button;
    NSMutableArray * _buttonConstraints;
    GKCollectionViewDataSource * _dataSource;
}

@property (nonatomic) SEL action;
@property (nonatomic, retain) UIButton *button;
@property (nonatomic, retain) NSMutableArray *buttonConstraints;
@property (nonatomic, retain) GKCollectionViewDataSource *dataSource;

+ (void)registerSupplementaryViewClassesForKind:(id)arg1 withCollectionView:(id)arg2;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (SEL)action;
- (void)applyLayoutAttributes:(id)arg1;
- (id)button;
- (id)buttonConstraints;
- (void)buttonPressed:(id)arg1;
- (id)dataSource;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAction:(SEL)arg1;
- (void)setButton:(id)arg1;
- (void)setButtonConstraints:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)updateConstraints;

@end
