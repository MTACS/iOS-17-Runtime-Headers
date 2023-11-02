
@interface BTDevicePickerRemoteViewController : _UIRemoteViewController <BTDevicePickerRemoteViewControllerHost> {
    <BTDevicePickerRemoteViewControllerHost> * _delegate;
}

@property (nonatomic) <BTDevicePickerRemoteViewControllerHost> *_delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)_delegate;
- (void)didDismissWithResult:(long long)arg1 deviceAddress:(id)arg2;
- (void)discoveredDevice:(id)arg1 deviceAddress:(id)arg2;
- (void)set_delegate:(id)arg1;

@end
