
@interface LUILogFilterView : UIView {
    UIButton * _addButton;
    UIButton * _applyButton;
    UILabel * _currentPredicateLabel;
    UIStackView * _enterPredicateStackView;
    UITableView * _existingPredicatesTableView;
    UIView * _horizontalSeparatorLine;
    UITextField * _predicateTextField;
    UICollectionView * _predicatesComparisonCandidateCollectionView;
    UICollectionView * _predicatesKeyCandidateCollectionView;
    UICollectionView * _predicatesValueCandidateCollectionView;
    UIView * _veriticalSeparatorLineFirst;
    UIView * _veriticalSeparatorLineSecond;
}

@property (nonatomic, retain) UIButton *addButton;
@property (nonatomic, retain) UIButton *applyButton;
@property (nonatomic, retain) UILabel *currentPredicateLabel;
@property (nonatomic, retain) UIStackView *enterPredicateStackView;
@property (nonatomic, retain) UITableView *existingPredicatesTableView;
@property (nonatomic, retain) UIView *horizontalSeparatorLine;
@property (nonatomic, retain) UITextField *predicateTextField;
@property (nonatomic, retain) UICollectionView *predicatesComparisonCandidateCollectionView;
@property (nonatomic, retain) UICollectionView *predicatesKeyCandidateCollectionView;
@property (nonatomic, retain) UICollectionView *predicatesValueCandidateCollectionView;
@property (nonatomic, retain) UIView *veriticalSeparatorLineFirst;
@property (nonatomic, retain) UIView *veriticalSeparatorLineSecond;

- (void).cxx_destruct;
- (id)_createButtonWithTitle:(id)arg1;
- (id)_createCollectionView;
- (id)_createCurrentPredicateLabel;
- (id)_createEnterLabel;
- (id)_createEnterPredicateStackViewWithSubViews:(id)arg1;
- (id)_createPredicateTextField;
- (id)_createSeparatorLine;
- (id)_createTableView;
- (void)_setup;
- (id)addButton;
- (id)applyButton;
- (id)currentPredicateLabel;
- (id)enterPredicateStackView;
- (id)existingPredicatesTableView;
- (id)horizontalSeparatorLine;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)predicateTextField;
- (id)predicatesComparisonCandidateCollectionView;
- (id)predicatesKeyCandidateCollectionView;
- (id)predicatesValueCandidateCollectionView;
- (void)setAddButton:(id)arg1;
- (void)setApplyButton:(id)arg1;
- (void)setCurrentPredicateLabel:(id)arg1;
- (void)setEnterPredicateStackView:(id)arg1;
- (void)setExistingPredicatesTableView:(id)arg1;
- (void)setHorizontalSeparatorLine:(id)arg1;
- (void)setPredicateTextField:(id)arg1;
- (void)setPredicatesComparisonCandidateCollectionView:(id)arg1;
- (void)setPredicatesKeyCandidateCollectionView:(id)arg1;
- (void)setPredicatesValueCandidateCollectionView:(id)arg1;
- (void)setVeriticalSeparatorLineFirst:(id)arg1;
- (void)setVeriticalSeparatorLineSecond:(id)arg1;
- (id)veriticalSeparatorLineFirst;
- (id)veriticalSeparatorLineSecond;

@end
