
@protocol HAPAirPlayAccessoryBrowserDelegate

@required

- (void)wacBrowser:(HAPWACAccessoryBrowser *)arg1 didFindAirPlayDevice:(CUWiFiDevice *)arg2;
- (void)wacBrowser:(HAPWACAccessoryBrowser *)arg1 didRemoveAirPlayDevice:(CUWiFiDevice *)arg2;
- (void)wacBrowser:(HAPWACAccessoryBrowser *)arg1 didUpdateAirPlayDevice:(CUWiFiDevice *)arg2;

@end
