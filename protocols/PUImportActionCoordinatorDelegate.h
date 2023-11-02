
@protocol PUImportActionCoordinatorDelegate

@required

- (void)actionCoordinator:(PUImportActionCoordinator *)arg1 didCompleteWithImportSession:(PXImportSessionInfo *)arg2 results:(PHImportResults *)arg3;
- (void)actionCoordinatorDidBeginDelete:(PUImportActionCoordinator *)arg1;
- (void)actionCoordinatorDidBeginImport:(PUImportActionCoordinator *)arg1;
- (void)actionCoordinatorDidCancelImport:(PUImportActionCoordinator *)arg1;
- (void)actionCoordinatorDidEndDelete:(PUImportActionCoordinator *)arg1;
- (void)actionCoordinatorWillBeginDelete:(PUImportActionCoordinator *)arg1;
- (void)actionCoordinatorWillBeginImport:(PUImportActionCoordinator *)arg1;
- (PHAssetCollection *)importDestinationForActionCoordinator:(PUImportActionCoordinator *)arg1;

@end
