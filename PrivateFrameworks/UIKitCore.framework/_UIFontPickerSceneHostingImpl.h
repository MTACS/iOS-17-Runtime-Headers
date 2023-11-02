
@interface _UIFontPickerSceneHostingImpl : NSObject <_UIFontPickerViewControllerHost, _UIFontPickerViewHostingImpl, _UISceneHostingControllerDelegate> {
    _UISceneHostingController * _hostingController;
    UIFontPickerViewController * delegateFontPickerViewController;
}

@property (nonatomic, readonly) <_UIRemoteSheet> *_remoteSheet;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) UIFontPickerViewController *delegateFontPickerViewController;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_pickerDidCancel;
- (void)_pickerDidSelectFont:(id)arg1;
- (id)_remoteSheet;
- (void)clientIsReady;
- (id)delegateFontPickerViewController;
- (void)setDelegateFontPickerViewController:(id)arg1;
- (void)setHideNavigationBar:(bool)arg1;
- (void)setRemoteSelectedFontDescriptors:(id)arg1 scrollToVisible:(bool)arg2;
- (void)setupRemoteHosting;
- (void)setupSceneHosting;

@end
