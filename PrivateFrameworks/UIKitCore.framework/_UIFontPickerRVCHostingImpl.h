
@interface _UIFontPickerRVCHostingImpl : NSObject <_UIFontPickerViewControllerHost, _UIFontPickerViewHostingImpl> {
    NSExtension * _extension;
    <NSCopying> * _extensionRequestIdentifier;
    _UIFontPickerRemoteViewController * _remoteViewController;
    UIFontPickerViewController * delegateFontPickerViewController;
}

@property (nonatomic, readonly) <_UIRemoteSheet> *_remoteSheet;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) UIFontPickerViewController *delegateFontPickerViewController;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, copy) <NSCopying> *extensionRequestIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIFontPickerRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initializeRemoteViewController;
- (void)_pickerDidCancel;
- (void)_pickerDidSelectFont:(id)arg1;
- (id)_remoteSheet;
- (void)_setChildViewController:(id)arg1;
- (void)dealloc;
- (id)delegateFontPickerViewController;
- (id)extension;
- (id)extensionRequestIdentifier;
- (void)invalidate;
- (id)remoteViewController;
- (void)setDelegateFontPickerViewController:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (void)setHideNavigationBar:(bool)arg1;
- (void)setRemoteSelectedFontDescriptors:(id)arg1 scrollToVisible:(bool)arg2;
- (void)setRemoteViewController:(id)arg1;
- (void)setupRemoteHosting;

@end
