
@protocol PXImportControllerTopLevelCompletionDelegate <NSObject>

@required

- (void)importController:(void *)arg1 didCompleteImportWithImportSession:(void *)arg2 results:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: PXImportController *, PXImportSessionInfo *, PHImportResults *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)importController:(PXImportController *)arg1 didLoadAssets:(NSArray *)arg2 exceptions:(NSArray *)arg3;

@end
