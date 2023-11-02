
@interface BTDevicePicker : NSObject <BTDevicePickerRemoteViewControllerHost> {
    UIWindow_Custom * _alertWindow;
    <BTDevicePickerDelegate> * _delegate;
    BTDevicePickerRemoteViewController * _devicePickerRemoteViewController;
    NSExtension * _extension;
    <NSCopying> * _extensionRequestIdentifier;
    NSPredicate * _predicate;
    unsigned int  _service;
    NSString * _title;
}

@property (nonatomic) <BTDevicePickerDelegate> *delegate;
@property (nonatomic, retain) BTDevicePickerRemoteViewController *devicePickerRemoteViewController;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, copy) <NSCopying> *extensionRequestIdentifier;

- (void).cxx_destruct;
- (void)applicationWillResignActive:(id)arg1;
- (void)createAlertWindowForRootViewController:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)devicePickerRemoteViewController;
- (void)didDismissWithResult:(long long)arg1 deviceAddress:(id)arg2;
- (void)discoveredDevice:(id)arg1 deviceAddress:(id)arg2;
- (void)dismissAnimated:(bool)arg1;
- (id)extension;
- (id)extensionRequestIdentifier;
- (id)initWithTitle:(id)arg1 service:(unsigned int)arg2 discoveryNameFilter:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDevicePickerRemoteViewController:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (void)show;

@end
