
@protocol _UIAlertControllerLayoutObserving <NSObject>

@required

- (void)_addHeaderContentViewControllerToViewHierarchyIfNecessary;
- (void)_addSeparatedHeaderContentViewControllerToViewHierarchyIfNecessary;
- (void)_layoutAndPositionInParentIfNeeded;
- (void)_recomputeActionMetrics;
- (void)_removeHeaderContentViewControllerViewFromHierarchy;
- (void)_removeSeparatedHeaderContentViewControllerFromHierarchy;
- (void)_sizeOfHeaderContentViewControllerChanged;
- (void)_sizeOfTextFieldViewControllerChanged;

@end
