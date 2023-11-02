
@interface UICandidateViewController : UIViewController <UIPredictiveViewController> {
    UIView * _candidateView;
}

@property (nonatomic, retain) UIView *candidateView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedCandidates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)preferredCandidateBarHeightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)candidateView;
- (id)displayedCandidates;
- (bool)hidesExpandableButton;
- (bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (void)loadView;
- (long long)overrideUserInterfaceStyle;
- (double)preferredHeightForTraitCollection:(id)arg1;
- (bool)requiresKeyboard;
- (void)setCandidateView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
