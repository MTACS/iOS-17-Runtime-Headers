
@protocol PXSharePresentation <NSObject>

@required

- (<PXActivitySharingController> *)createActivitySharingControllerWithContext:(PXActivitySharingContext *)arg1;
- (<PXActivitySharingController> *)createActivitySharingControllerWithContext:(PXActivitySharingContext *)arg1 selectedAssetIndexSet:(NSIndexSet *)arg2;
- (NSArray *)defaultActivityTypeOrder;

@end
