
@protocol FPDFileCoordinationProviderDelegate

@required

- (void)_cancelProvidingItemAtURL:(NSURL *)arg1 toReaderWithID:(id)arg2;
- (NSString *)_fileReactorID;
- (void)_movingItemAtURL:(void *)arg1 withInfo:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSFileProviderMovingInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileProviderMovingResponse *, void*
- (NSURL *)_physicalURLForURL:(NSURL *)arg1;
- (void)_provideItemAtURL:(void *)arg1 withInfo:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSFileProvidingInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileProvidingResponse *, void*
- (void)_providedItemAtURL:(NSURL *)arg1 didGainPresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(NSURL *)arg1 didLosePresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(NSURL *)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(NSURL *)arg3;
- (NSOperationQueue *)_providedItemsOperationQueue;
- (<FPDFileCoordinationProviderDelegate> *)_siblingDelegateForURL:(NSURL *)arg1;
- (void)_writerWithID:(id)arg1 didFinishWritingForURL:(NSURL *)arg2;

@end
