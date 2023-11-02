
@interface FPDVersionsFileCoordinationProviderDelegate : NSObject <FPDFileCoordinationProviderDelegate> {
    FPDExtensionManager * _extensionManager;
}

- (void).cxx_destruct;
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (id)_fileReactorID;
- (void)_movingItemAtURL:(id)arg1 withInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_physicalURLForURL:(id)arg1;
- (void)_provideItemAtURL:(id)arg1 withInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3;
- (id)_providedItemsOperationQueue;
- (id)_siblingDelegateForURL:(id)arg1;
- (void)_writerWithID:(id)arg1 didFinishWritingForURL:(id)arg2;
- (id)initWithExtensionManager:(id)arg1;

@end
