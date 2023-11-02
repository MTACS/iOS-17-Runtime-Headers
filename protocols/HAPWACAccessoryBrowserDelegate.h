
@protocol HAPWACAccessoryBrowserDelegate

@required

- (void)wacBrowser:(HAPWACAccessoryBrowser *)arg1 didFindHAPWACAccessory:(HAPWACAccessory *)arg2;
- (void)wacBrowser:(HAPWACAccessoryBrowser *)arg1 didFindUnconfiguredPairedHAPWACAccessory:(HAPWACAccessory *)arg2;
- (void)wacBrowser:(HAPWACAccessoryBrowser *)arg1 didRemoveHAPWACAccessory:(HAPWACAccessory *)arg2;

@end
