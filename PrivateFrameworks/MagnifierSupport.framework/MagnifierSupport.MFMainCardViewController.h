
@interface MagnifierSupport.MFMainCardViewController : UIViewController {
    void $__lazy_storage_$_informationLabel;
    void $__lazy_storage_$_landscapeInformationLabel;
    void $__lazy_storage_$_regularWidthConstraint;
    void bottomBoundaryConstraint;
    void boundaryConstraints;
    void cardContainer;
    void cardController;
    void coachingLabel;
    void compactConstraints;
    void containedCard;
    void landscapeCoachingLabel;
    void leadingBoundaryConstraint;
    void rotationSubscription;
    void topBoundaryConstraint;
    void trailingBoundaryConstraint;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
