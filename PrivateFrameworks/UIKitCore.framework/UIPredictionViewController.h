
@interface UIPredictionViewController : UIViewController <TUIPredictionViewDelegate, UIKeyboardAutocorrectionObserver, UIPredictiveViewController> {
    TIAutocorrectionList * _cachedAutocorrectionList;
    NSDate * _lastUIUpdateTime;
    TUIPredictionView * _predictionView;
    NSTimer * _updateUITimer;
}

@property (nonatomic, retain) TIAutocorrectionList *cachedAutocorrectionList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedCandidates;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TUIPredictionView *predictionView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_autocorrectionListContainsContinuousPathConversions:(id)arg1;
- (bool)_autocorrectionListMayCausePredictionViewToReappear:(id)arg1;
- (bool)_canShowWhileLocked;
- (void)_clearTextSuggestions;
- (id)_currentTextSuggestions;
- (void)_inputModeDidChange;
- (void)_inputResponderDidChangeNotification:(id)arg1;
- (bool)_isVisibleForAutocorrectionType:(long long)arg1;
- (void)_performThrottledUpdateUIWithAutocorrectionList:(id)arg1;
- (void)_registerAsAutocorrectionObserver;
- (void)_registerForNotifications;
- (void)_throttledUpdateUIWithAutocorrectionList:(id)arg1;
- (void)_updateAutocorrectionList:(id)arg1;
- (void)autocorrectionController:(id)arg1 didUpdateAutocorrectionList:(id)arg2;
- (void)autocorrectionControllerDidClearAutocorrections:(id)arg1;
- (id)cachedAutocorrectionList;
- (void)dealloc;
- (id)displayedCandidates;
- (bool)hidesExpandableButton;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (void)loadView;
- (id)predictionView;
- (void)predictionView:(id)arg1 didSelectCandidate:(id)arg2;
- (double)preferredHeightForTraitCollection:(id)arg1;
- (bool)requiresKeyboard;
- (void)setCachedAutocorrectionList:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
