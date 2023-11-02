
@interface AMPOnboardingMultiFeatureHeaderView : UIScrollView {
    double  _containerHeight;
    NSArray * _featureViews;
    bool  _isPresentedInFormSheet;
    UILabel * _titleLabel;
}

@property (nonatomic) double containerHeight;
@property (nonatomic, retain) NSArray *featureViews;
@property (nonatomic) bool isPresentedInFormSheet;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)adjustedContentInsetDidChange;
- (double)containerHeight;
- (id)featureViews;
- (id)initWithFeatures:(id)arg1;
- (bool)isPresentedInFormSheet;
- (void)layoutSubviews;
- (void)setContainerHeight:(double)arg1;
- (void)setFeatureViews:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsPresentedInFormSheet:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContentSize;

@end
