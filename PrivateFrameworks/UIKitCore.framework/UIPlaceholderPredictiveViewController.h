
@interface UIPlaceholderPredictiveViewController : UIViewController <UIPredictiveViewController> {
    bool  _showsRemoteInputDashViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedCandidates;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showsRemoteInputDashViewController;
@property (readonly) Class superclass;

- (bool)_canShowWhileLocked;
- (id)_currentTextSuggestions;
- (bool)_isVisibleForAutocorrectionType:(long long)arg1;
- (id)displayedCandidates;
- (bool)hidesExpandableButton;
- (bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (double)preferredHeightForTraitCollection:(id)arg1;
- (bool)requiresKeyboard;
- (void)setShowsRemoteInputDashViewController:(bool)arg1;
- (bool)showsRemoteInputDashViewController;

@end
