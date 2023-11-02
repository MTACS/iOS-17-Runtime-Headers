
@interface SeymourUI.WorkoutPlanCalendarViewController : UIViewController <UICollectionViewDelegate> {
    void collectionView;
    void dataSource;
    void isApplyingSnapshot;
    void isTappingScrollView;
    void layoutProvider;
    void presenter;
}

- (void).cxx_destruct;
- (void)_collectionView:(id)arg1 orthogonalScrollViewDidScroll:(id)arg2 section:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
