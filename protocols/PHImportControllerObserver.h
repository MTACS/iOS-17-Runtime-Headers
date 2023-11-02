
@protocol PHImportControllerObserver <NSObject>

@required

- (void)importController:(PHImportController *)arg1 addedImportSource:(PHImportSource *)arg2;
- (void)importController:(PHImportController *)arg1 removedImportSource:(PHImportSource *)arg2;

@optional

- (void)importController:(PHImportController *)arg1 failedToAddImportSource:(PHImportSource *)arg2 exceptions:(NSArray *)arg3;

@end
