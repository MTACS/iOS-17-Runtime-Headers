
@protocol HUQuickControlViewControllerDelegate <NSObject>

@required

- (HFItem<NSCopying> *)item;
- (void)quickControlViewControllerDidUpdateStatusOverrides:(HUQuickControlViewController *)arg1;

@end
