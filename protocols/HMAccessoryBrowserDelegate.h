
@protocol HMAccessoryBrowserDelegate <NSObject>

@optional

- (void)accessoryBrowser:(HMAccessoryBrowser *)arg1 didFindNewAccessory:(HMAccessory *)arg2;
- (void)accessoryBrowser:(HMAccessoryBrowser *)arg1 didRemoveNewAccessory:(HMAccessory *)arg2;

@end
