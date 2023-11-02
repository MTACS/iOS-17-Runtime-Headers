
@interface UIFontPickerViewController : UIViewController <BSDescriptionProviding, _UIFontPickerViewControllerHost, _UIRemoteSheetContaining> {
    NSArray * __selectedFontDescriptors;
    UIFontPickerViewControllerConfiguration * _configuration;
    <UIFontPickerViewControllerDelegate> * _delegate;
    <_UIFontPickerViewHostingImpl> * _hostingImpl;
    bool  _presentingViewController;
}

@property (nonatomic, readonly) bool _presentingViewController;
@property (nonatomic, readonly) <_UIRemoteSheet> *_remoteSheet;
@property (setter=_setSelectedFontDescriptors:, nonatomic, retain) NSArray *_selectedFontDescriptors;
@property (nonatomic, readonly, copy) UIFontPickerViewControllerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIFontPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIFontDescriptor *selectedFontDescriptor;
@property (readonly) Class superclass;

+ (bool)_useSceneBackedFontPicker;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_commonFontPickerViewControllerInitUsingScene:(bool)arg1;
- (id)_initWithConfiguration:(id)arg1 useSceneBackedImplementation:(bool)arg2;
- (void)_pickerDidCancel;
- (void)_pickerDidSelectFont:(id)arg1;
- (bool)_presentingViewController;
- (id)_remoteSheet;
- (id)_selectedFontDescriptors;
- (void)_setSelectedFontDescriptors:(id)arg1;
- (void)_viewControllerPresentationDidInitiate;
- (id)configuration;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)selectedFontDescriptor;
- (void)setDelegate:(id)arg1;
- (void)setSelectedFontDescriptor:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)viewWillAppear:(bool)arg1;

@end
