
@interface UIColorPickerViewController : UIViewController <_UIColorPickerColorQueueDelegate, _UIColorPickerViewProvidingDelegate> {
    _UIColorPickerViewControllerConfiguration * __remoteConfiguration;
    UIViewController * _childViewController;
    _UIColorPickerColorQueue * _colorQueue;
    _UIColorPickerViewControllerConfiguration * _configuration;
    <UIColorPickerViewControllerDelegate> * _delegate;
    struct { 
        unsigned int delegateImplementsDidSelectColorContinuous : 1; 
        unsigned int delegateImplementsDidSelectColor : 1; 
        unsigned int delegateImplementsDidDeselectColorSPI : 1; 
    }  _flags;
    <_UIColorPickerViewHostingImpl> * _hostingImpl;
    UIPresentationController * _presentationController;
    UIColor * _selectedColor;
}

@property (setter=_setAllowsNoColor:, nonatomic) bool _allowsNoColor;
@property (setter=_setChildViewController:, nonatomic, retain) UIViewController *_childViewController;
@property (setter=_setRemoteConfiguration:, nonatomic, copy) _UIColorPickerViewControllerConfiguration *_remoteConfiguration;
@property (setter=_setSelectedColor:, nonatomic, retain) UIColor *_selectedColor;
@property (setter=_setShouldUseDarkGridInDarkMode:, nonatomic) bool _shouldUseDarkGridInDarkMode;
@property (setter=_setShowsGridOnly:, nonatomic) bool _showsGridOnly;
@property (setter=_setSuggestedColors:, nonatomic, copy) NSArray *_suggestedColors;
@property (setter=_setSupportsEyedropper:, nonatomic) bool _supportsEyedropper;
@property (setter=_setUserInterfaceStyleForGrid:, nonatomic) long long _userInterfaceStyleForGrid;
@property (nonatomic, retain) _UIColorPickerColorQueue *colorQueue;
@property (nonatomic, readonly, copy) _UIColorPickerViewControllerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIColorPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *selectedColor;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsAlpha;

+ (bool)_useSceneBackedColorPicker;

- (void).cxx_destruct;
- (void)__setSelectedColor:(id)arg1 notifyingViewService:(bool)arg2;
- (bool)_allowsNoColor;
- (bool)_canShowWhileLocked;
- (id)_childViewController;
- (void)_colorPickerDidUpdatePreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_commonUIColorPickerViewControllerInit;
- (id)_defaultColor;
- (void)_dequeue_pickerDidSelectColor:(id)arg1 colorSpace:(id)arg2 isVolatile:(bool)arg3;
- (struct CGSize { double x1; double x2; })_formSheetSizeForWindowWithSize:(struct CGSize { double x1; double x2; })arg1 screenSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_pickerDidDismissEyedropper;
- (void)_pickerDidFinish;
- (void)_pickerDidFloatEyedropper;
- (void)_pickerDidSelectColor:(id)arg1 colorSpace:(id)arg2 isVolatile:(bool)arg3;
- (void)_pickerDidShowEyedropper;
- (void)_presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2;
- (id)_remoteConfiguration;
- (id)_remoteSheet;
- (void)_selectDefaultColorIfNecessary;
- (id)_selectedColor;
- (void)_setAllowsNoColor:(bool)arg1;
- (void)_setChildViewController:(id)arg1;
- (void)_setRemoteConfiguration:(id)arg1;
- (void)_setSelectedColor:(id)arg1;
- (void)_setShouldUseDarkGridInDarkMode:(bool)arg1;
- (void)_setShowsGridOnly:(bool)arg1;
- (void)_setSuggestedColors:(id)arg1;
- (void)_setSupportsEyedropper:(bool)arg1;
- (void)_setUserInterfaceStyleForGrid:(long long)arg1;
- (bool)_shouldUseDarkGridInDarkMode;
- (bool)_showsGridOnly;
- (id)_suggestedColors;
- (bool)_supportsEyedropper;
- (void)_updateConfiguration;
- (void)_updateConfigurationIfNeeded;
- (long long)_userInterfaceStyleForGrid;
- (void)beginAppearanceTransition:(bool)arg1 animated:(bool)arg2;
- (id)colorQueue;
- (id)configuration;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (id)selectedColor;
- (void)setColorQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setSupportsAlpha:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)supportsAlpha;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;

@end
