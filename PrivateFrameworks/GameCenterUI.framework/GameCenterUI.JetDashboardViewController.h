
@interface GameCenterUI.JetDashboardViewController : GameCenterUI.BaseSplitCollectionViewController <GKPlayerAvatarViewDelegate> {
    void _rootController;
    void _specifier;
    void badageablePhotoView;
    void clippingLayer;
    void dashboardPresenter;
    void landscapeBadageablePhotoView;
    void launchContext;
    void profileBadgeCount;
    void request;
}

@property (nonatomic, retain) PSRootController *_rootController;
@property (nonatomic, retain) PSSpecifier *_specifier;
@property (nonatomic, retain) _TtC12GameCenterUI18BaseSplitPresenter *dataPresenter;

- (void).cxx_destruct;
- (id)_rootController;
- (id)_specifier;
- (id)dataPresenter;
- (void)didSelectPlayerAvatarView:(id)arg1;
- (void)donePressed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadMoreWithContinuationToken:(id)arg1;
- (void)setDataPresenter:(id)arg1;
- (void)set_rootController:(id)arg1;
- (void)set_specifier:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
