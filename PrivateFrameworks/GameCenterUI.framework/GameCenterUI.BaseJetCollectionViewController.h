
@interface GameCenterUI.BaseJetCollectionViewController : GameCenterUI.BaseCollectionViewController {
    void bootstrapPresenter;
    void components;
    void compositionalLayout;
    void diffableDataSource;
    void dismissHandler;
    void pageMetricsPresenter;
    void primaryImpressionsCalculator;
    void statePresenter;
}

@property (nonatomic, retain) _TtC12GameCenterUI18BootstrapPresenter *bootstrapPresenter;
@property (nonatomic, retain) UICollectionViewCompositionalLayout *compositionalLayout;
@property (nonatomic, readonly) _TtC12GameCenterUI13BasePresenter *dataPresenter;
@property (nonatomic, copy) id /* block */ dismissHandler;

- (void).cxx_destruct;
- (id)bootstrapPresenter;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })collectionViewFrameInsets;
- (id)compositionalLayout;
- (id)dataPresenter;
- (void)didReceiveMemoryWarning;
- (id /* block */)dismissHandler;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)makeLayout;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setBootstrapPresenter:(id)arg1;
- (void)setCompositionalLayout:(id)arg1;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
