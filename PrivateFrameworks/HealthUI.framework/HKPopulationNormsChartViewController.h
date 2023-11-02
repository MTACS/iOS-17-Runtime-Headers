
@interface HKPopulationNormsChartViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    UILabel * _attributionLabel;
    NSString * _baseIdentifier;
    UISegmentedControl * _biologicalSexSegmentedControl;
    UILabel * _chartTitleLabel;
    HKPopulationNormsClassificationCollectionView * _classificationCollectionView;
    HKPopulationNormsDescriptionView * _classificationDescriptionView;
    UILabel * _classificationLevelsTitleLabel;
    UIView * _contentView;
    HKPopulationNormsGraphView * _populationNormsGraphView;
    NSLayoutConstraint * _previousPopulationNormsGraphHeightConstraint;
    bool  _shouldEmbedInScrollView;
    <HKPopulationNormsViewModelDataSource> * _viewModel;
}

@property (nonatomic, retain) UILabel *attributionLabel;
@property (nonatomic, copy) NSString *baseIdentifier;
@property (nonatomic, retain) UISegmentedControl *biologicalSexSegmentedControl;
@property (nonatomic, retain) UILabel *chartTitleLabel;
@property (nonatomic, retain) HKPopulationNormsClassificationCollectionView *classificationCollectionView;
@property (nonatomic, retain) HKPopulationNormsDescriptionView *classificationDescriptionView;
@property (nonatomic, retain) UILabel *classificationLevelsTitleLabel;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKPopulationNormsGraphView *populationNormsGraphView;
@property (nonatomic, retain) NSLayoutConstraint *previousPopulationNormsGraphHeightConstraint;
@property (nonatomic, readonly) bool shouldEmbedInScrollView;
@property (readonly) Class superclass;
@property (nonatomic, retain) <HKPopulationNormsViewModelDataSource> *viewModel;

- (void).cxx_destruct;
- (void)_deselectClassificationCellAtIndexPath:(id)arg1;
- (void)_refreshViewModelIfNecessary;
- (void)_selectClassificationCellAtIndexPath:(id)arg1;
- (void)_setupFonts;
- (id)_viewModelForDisplayType:(id)arg1 healthStore:(id)arg2;
- (id)attributionLabel;
- (id)baseIdentifier;
- (id)biologicalSexSegmentedControl;
- (id)chartTitleLabel;
- (id)classificationCollectionView;
- (id)classificationDescriptionView;
- (id)classificationLevelsTitleLabel;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)contentView;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 shouldEmbedInScrollView:(bool)arg3;
- (void)loadView;
- (id)populationNormsGraphView;
- (id)previousPopulationNormsGraphHeightConstraint;
- (void)segmentedControlDidChange:(id)arg1;
- (void)setAttributionLabel:(id)arg1;
- (void)setBaseIdentifier:(id)arg1;
- (void)setBiologicalSexSegmentedControl:(id)arg1;
- (void)setChartTitleLabel:(id)arg1;
- (void)setClassificationCollectionView:(id)arg1;
- (void)setClassificationDescriptionView:(id)arg1;
- (void)setClassificationLevelsTitleLabel:(id)arg1;
- (void)setPopulationNormsGraphView:(id)arg1;
- (void)setPreviousPopulationNormsGraphHeightConstraint:(id)arg1;
- (void)setViewModel:(id)arg1;
- (bool)shouldEmbedInScrollView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePopulationNormsGraphHeightWithTraitCollection:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (id)viewModel;
- (void)viewWillAppear:(bool)arg1;

@end
