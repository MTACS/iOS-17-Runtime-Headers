
@protocol ICDeviceBrowserDelegate <NSObject>

@required

- (void)deviceBrowser:(ICDeviceBrowser *)arg1 didAddDevice:(ICDevice *)arg2 moreComing:(bool)arg3;
- (void)deviceBrowser:(ICDeviceBrowser *)arg1 didRemoveDevice:(ICDevice *)arg2 moreGoing:(bool)arg3;

@optional

- (void)deviceBrowser:(ICDeviceBrowser *)arg1 deviceDidChangeName:(ICDevice *)arg2;
- (void)deviceBrowser:(ICDeviceBrowser *)arg1 deviceDidChangeSharingState:(ICDevice *)arg2;
- (void)deviceBrowser:(ICDeviceBrowser *)arg1 requestsSelectDevice:(ICDevice *)arg2;
- (void)deviceBrowserDidCancelSuspendOperations:(ICDeviceBrowser *)arg1;
- (void)deviceBrowserDidEnumerateLocalDevices:(ICDeviceBrowser *)arg1;
- (void)deviceBrowserDidResumeOperations:(ICDeviceBrowser *)arg1;
- (void)deviceBrowserDidSuspendOperations:(ICDeviceBrowser *)arg1;
- (void)deviceBrowserWillSuspendOperations:(ICDeviceBrowser *)arg1;

@end
