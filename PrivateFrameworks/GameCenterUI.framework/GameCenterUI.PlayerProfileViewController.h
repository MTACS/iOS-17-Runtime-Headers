
@interface GameCenterUI.PlayerProfileViewController : GameCenterUI.BaseSplitCollectionViewController <PSController> {
    void _rootController;
    void _specifier;
    void clippingLayer;
    void friendSuggestionsSectionFocusGuide;
    void profilePresenter;
    void startTime;
}

@property (nonatomic, retain) PSRootController *_rootController;
@property (nonatomic, retain) PSSpecifier *_specifier;
@property (nonatomic, retain) _TtC12GameCenterUI18BaseSplitPresenter *dataPresenter;
@property (nonatomic, readonly) bool shouldDisplayInSplitView;

+ (void)showProfileFor:(id)arg1 from:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_rootController;
- (id)_specifier;
- (bool)canBeShownFromSuspendedState;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)contentScrollView;
- (id)dataPresenter;
- (void)donePressed:(id)arg1;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadMoreWithContinuationToken:(id)arg1;
- (void)mainSecondaryCollectionViewLayout;
- (id)parentController;
- (id)readPreferenceValue:(id)arg1;
- (id)rootController;
- (void)scrollToTopActionTriggered;
- (void)setDataPresenter:(id)arg1;
- (void)setParentController:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setRootController:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)set_rootController:(id)arg1;
- (void)set_specifier:(id)arg1;
- (bool)shouldDisplayInSplitView;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 animate:(bool)arg2;
- (id)specifier;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
