
@protocol NSFileProvider <NSObject>

@required

- (void)_provideItemAtURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSOperationQueue *)_providedItemsOperationQueue;
- (NSURL *)_providedItemsURL;

@optional

- (void)_cancelProvidingItemAtURL:(NSURL *)arg1 toReaderWithID:(id)arg2;
- (NSString *)_fileReactorID;
- (void)_getPhysicalURLForURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*
- (void)_movingItemAtURL:(void *)arg1 requiresProvidingWithDestinationURL:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)_movingItemAtURL:(void *)arg1 withInfo:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSFileProviderMovingInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileProviderMovingResponse *, void*
- (NSURL *)_physicalURLForURL:(NSURL *)arg1;
- (void)_provideItemAtURL:(void *)arg1 toReaderWithID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_provideItemAtURL:(void *)arg1 withInfo:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSFileProvidingInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileProvidingResponse *, void*
- (void)_providedItemAtURL:(NSURL *)arg1 didGainPresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(NSURL *)arg1 didGainPresenterWithInfo:(NSFileProviderPresenterInfo *)arg2;
- (void)_providedItemAtURL:(NSURL *)arg1 didLosePresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(NSURL *)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(NSURL *)arg3;
- (void)_writerWithID:(id)arg1 didFinishWritingForURL:(NSURL *)arg2;

@end
