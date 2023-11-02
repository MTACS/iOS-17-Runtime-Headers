
@interface CSFocusActivityViewController : CSCoverSheetViewControllerBase <CSActivityPickerViewControllerDelegate, CSAdjunctItemHosting, CSFocusActivityViewDelegate, PTSettingsKeyObserver> {
    <FCActivityDescribing> * _activity;
    CSActivityPickerViewController * _activityPickerViewController;
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSize;
    UIView * _customFocusActivityPickerPresentingView;
    <CSFocusActivityViewControllerDelegate> * _delegate;
}

@property (nonatomic, retain) <FCActivityDescribing> *activity;
@property (nonatomic, readonly) UIView *activityIndicator;
@property (nonatomic, readonly) CSActivityPickerViewController *activityPickerViewController;
@property (nonatomic) double containerCornerRadius;
@property (nonatomic) UIView *customFocusActivityPickerPresentingView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSFocusActivityViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActivityIndicatorVisible;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;

+ (Class)viewClass;

- (void).cxx_destruct;
- (id)_activityViewIfLoaded;
- (bool)_canShowWhileLocked;
- (void)_removeActivityViewIndicatorIfNecessary;
- (void)_updateActivityViewActivity;
- (void)_updateActivityViewBehavior;
- (void)_updateActivityViewLegibility;
- (void)_updatePreferredContentSize;
- (id)activity;
- (id)activityIndicator;
- (id)activityPickerViewController;
- (id)activityPickerViewControllerPresentingView:(id)arg1;
- (id)activityPickerViewControllerRepresentedActivityForDismissal:(id)arg1;
- (id)activityPickerViewControllerRepresentedActivityForPresentation:(id)arg1;
- (id)customFocusActivityPickerPresentingView;
- (id)delegate;
- (void)focusActivityViewIndicatorDidChangeToVisible:(bool)arg1;
- (void)focusActivityViewIndicatorPressed:(id)arg1;
- (bool)handleEvent:(id)arg1;
- (bool)isActivityIndicatorVisible;
- (void)presentFocusActivityPickerViewControllerFromView:(id)arg1 coverSheetViewPresenting:(id)arg2;
- (id)requiredVisualStyleCategories;
- (void)setActivity:(id)arg1;
- (void)setContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCustomFocusActivityPickerPresentingView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)usesBackgroundView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
