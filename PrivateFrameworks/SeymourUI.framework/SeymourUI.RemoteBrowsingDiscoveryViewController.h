
@interface SeymourUI.RemoteBrowsingDiscoveryViewController : UIViewController <UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate> {
    void collectionView;
    void currentlyConnectingCell;
    void dataSource;
    void indicatorView;
    void layout;
    void menuGestureRecognizer;
    void playPauseGestureRecognizer;
    void presenter;
    void promptIndicatorView;
    void promptLabel;
    void titleLabel;
}

@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (id)accessibilityTitleLabel;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2;
- (void)handleKohnahmiCodeSequence;
- (void)handleMenuButtonTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
