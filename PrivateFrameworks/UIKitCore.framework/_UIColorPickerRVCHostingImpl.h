
@interface _UIColorPickerRVCHostingImpl : NSObject <_UIColorPickerRemoteViewControllerHost, _UIColorPickerViewHostingImpl> {
    NSExtension * _extension;
    <NSCopying> * _extensionRequestIdentifier;
    _UIColorPickerRemoteViewController * _remoteViewController;
    UIColorPickerViewController * delegateColorPickerViewController;
}

@property (nonatomic, readonly) <_UIRemoteSheet> *_remoteSheet;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) UIColorPickerViewController *delegateColorPickerViewController;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, copy) <NSCopying> *extensionRequestIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIColorPickerRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_colorPickerDidUpdatePreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_colorPickerViewServiceDidTerminateWithError:(id)arg1;
- (void)_pickerDidDismissEyedropper;
- (void)_pickerDidFinish;
- (void)_pickerDidFloatEyedropper;
- (void)_pickerDidSelectColor:(id)arg1 colorSpace:(id)arg2 isVolatile:(bool)arg3;
- (void)_pickerDidShowEyedropper;
- (id)_remoteSheet;
- (void)_tryLaunchingExtension:(long long)arg1;
- (void)dealloc;
- (id)delegateColorPickerViewController;
- (id)extension;
- (id)extensionRequestIdentifier;
- (id)remoteViewController;
- (void)setDelegateColorPickerViewController:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (void)setRemoteConfiguration:(id)arg1;
- (void)setRemoteSelectedColor:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setupRemoteHosting;

@end
