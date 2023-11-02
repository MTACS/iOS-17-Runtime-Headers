
@interface UICompatibilityPredictiveViewController : UIViewController <UIPredictiveViewController> {
    UIView * _customView;
}

@property (nonatomic, retain) UIView *customView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedCandidates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)customView;
- (id)displayedCandidates;
- (bool)hidesExpandableButton;
- (bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (double)preferredHeightForTraitCollection:(id)arg1;
- (bool)requiresKeyboard;
- (void)setCustomView:(id)arg1;
- (void)viewDidLayoutSubviews;

@end
