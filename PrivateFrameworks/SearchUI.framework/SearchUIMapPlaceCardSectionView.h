
@interface SearchUIMapPlaceCardSectionView : SearchUICardSectionView <MUPlaceViewControllerDelegate, NUIContainerViewDelegate> {
    bool  _alreadyDispatchedOnMainQueue;
    SearchUIMapsViewController * _mapViewController;
}

@property bool alreadyDispatchedOnMainQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) SearchUIMapsViewController *mapViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)alreadyDispatchedOnMainQueue;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (void)didMoveToWindow;
- (id)embeddedViewController;
- (bool)isReportAProblemAvailable;
- (id)mapViewController;
- (void)placeViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(id /* block */)arg2;
- (void)placeViewControllerDidUpdateHeight:(id)arg1;
- (void)setAlreadyDispatchedOnMainQueue:(bool)arg1;
- (void)setMapViewController:(id)arg1;
- (id)setupContentView;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTintColorProvider;

@end
