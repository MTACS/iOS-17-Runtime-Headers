
@protocol _UIAlertControllerContentViewControllerObserving <NSObject>

@required

- (void)_addContentViewControllerToViewHierarchyIfNecessary;
- (void)_removeContentViewControllerViewFromHierarchy;
- (void)_sizeOfContentViewControllerChanged;

@end
