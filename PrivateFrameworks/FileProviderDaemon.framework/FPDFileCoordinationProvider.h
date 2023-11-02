
@interface FPDFileCoordinationProvider : NSObject <NSFileProvider> {
    <FPDFileCoordinationProviderDelegate> * _delegate;
    NSString * _extensionIdentifier;
    NSURL * _providedItemsURL;
    bool  _registered;
}

@property (readonly, copy) NSString *_fileReactorID;
@property (readonly) NSOperationQueue *_providedItemsOperationQueue;
@property (readonly, copy) NSURL *_providedItemsURL;
@property (readonly, copy) NSString *debugDescription;
@property <FPDFileCoordinationProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy) NSString *extensionIdentifier;
@property (readonly) unsigned long long hash;
@property (getter=isRegistered) bool registered;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (id)_fileReactorID;
- (void)_movingItemAtURL:(id)arg1 withInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_physicalURLForURL:(id)arg1;
- (void)_provideItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_provideItemAtURL:(id)arg1 withInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3;
- (id)_providedItemsOperationQueue;
- (id)_providedItemsURL;
- (void)_writerWithID:(id)arg1 didFinishWritingForURL:(id)arg2;
- (id)delegate;
- (id)delegateForURL:(id)arg1;
- (id)extensionIdentifier;
- (id)initWithRootURL:(id)arg1;
- (bool)isRegistered;
- (void)setDelegate:(id)arg1;
- (void)setExtensionIdentifier:(id)arg1;
- (void)setRegistered:(bool)arg1;

@end
