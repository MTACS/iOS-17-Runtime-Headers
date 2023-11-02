
@protocol MKLookAroundViewControllerDelegate <NSObject>

@optional

- (void)lookAroundViewControllerDidDismissFullScreen:(MKLookAroundViewController *)arg1;
- (void)lookAroundViewControllerDidPresentFullScreen:(MKLookAroundViewController *)arg1;
- (void)lookAroundViewControllerDidUpdateScene:(MKLookAroundViewController *)arg1;
- (void)lookAroundViewControllerWillDismissFullScreen:(MKLookAroundViewController *)arg1;
- (void)lookAroundViewControllerWillPresentFullScreen:(MKLookAroundViewController *)arg1;
- (void)lookAroundViewControllerWillUpdateScene:(MKLookAroundViewController *)arg1;

@end
