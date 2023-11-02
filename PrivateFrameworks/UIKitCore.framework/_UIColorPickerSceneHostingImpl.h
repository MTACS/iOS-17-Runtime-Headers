
@interface _UIColorPickerSceneHostingImpl : NSObject <_UIColorPickerViewHostingImpl, _UIColorPickerViewProvidingDelegate, _UISceneHostingControllerDelegate> {
    _UISceneHostingController * _hostingController;
    UIColorPickerViewController * delegateColorPickerViewController;
}

@property (nonatomic, readonly) <_UIRemoteSheet> *_remoteSheet;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) UIColorPickerViewController *delegateColorPickerViewController;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_pickerDidDismissEyedropper;
- (void)_pickerDidFinish;
- (void)_pickerDidFloatEyedropper;
- (void)_pickerDidSelectColor:(id)arg1 colorSpace:(id)arg2 isVolatile:(bool)arg3;
- (void)_pickerDidShowEyedropper;
- (id)_remoteSheet;
- (void)clientDidUpdatePreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)clientIsReady;
- (id)delegateColorPickerViewController;
- (void)setDelegateColorPickerViewController:(id)arg1;
- (void)setRemoteConfiguration:(id)arg1;
- (void)setRemoteSelectedColor:(id)arg1;
- (void)setupRemoteHosting;

@end
