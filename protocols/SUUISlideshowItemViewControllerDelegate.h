
@protocol SUUISlideshowItemViewControllerDelegate <NSObject>

@required

- (void)slideshowItemViewControllerDidBeginPinchGesture:(SUUISlideshowItemViewController *)arg1;
- (void)slideshowItemViewControllerDidDismissWithPinchGesture:(SUUISlideshowItemViewController *)arg1 ratio:(double)arg2;

@end
