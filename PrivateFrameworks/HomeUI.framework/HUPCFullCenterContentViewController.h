
@interface HUPCFullCenterContentViewController : PRXCardContentViewController {
    UIView * _centerContentView;
    double  _contentViewMaxHeight;
    NSLayoutConstraint * _contentViewOptionalHeightAnchor;
    NSArray * _floatingConstraintGroup;
    NSArray * _pinnedConstraintGroup;
}

@property (nonatomic, retain) UIView *centerContentView;
@property (nonatomic) double contentViewMaxHeight;
@property (nonatomic, retain) NSLayoutConstraint *contentViewOptionalHeightAnchor;
@property (nonatomic, retain) NSArray *floatingConstraintGroup;
@property (nonatomic, retain) NSArray *pinnedConstraintGroup;

- (void).cxx_destruct;
- (id)centerContentView;
- (double)contentViewMaxHeight;
- (id)contentViewOptionalHeightAnchor;
- (id)floatingConstraintGroup;
- (void)insertCenterContentView;
- (id)pinnedConstraintGroup;
- (void)recalculateLayoutForTraitCollectionChange;
- (void)setCenterContentView:(id)arg1;
- (void)setCenteredContentView:(id)arg1;
- (void)setContentViewMaxHeight:(double)arg1;
- (void)setContentViewOptionalHeightAnchor:(id)arg1;
- (void)setFloatingConstraintGroup:(id)arg1;
- (void)setPinnedConstraintGroup:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
