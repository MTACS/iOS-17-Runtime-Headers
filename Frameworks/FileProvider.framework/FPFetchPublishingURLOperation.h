
@interface FPFetchPublishingURLOperation : FPActionOperation <NSFilePresenter> {
    id /* block */  __t_filePresenterStarted;
    id /* block */  _fetchCompletionBlock;
    bool  _isFilePresenter;
    FPItem * _item;
    NSURL * _itemURL;
    NSProgress * _itemUploadProgress;
    NSOperationQueue * _operationQueue;
    NSProgress * _remoteCancellableProgress;
}

@property (nonatomic, copy) id /* block */ _t_filePresenterStarted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ fetchCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupFilePresenterAndWaitForUpload;
- (id /* block */)_t_filePresenterStarted;
- (void)_tryFetchingSharingURL;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg1;
- (void)actionMain;
- (void)cancel;
- (id /* block */)fetchCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItem:(id)arg1;
- (id)observedPresentedItemUbiquityAttributes;
- (void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)setFetchCompletionBlock:(id /* block */)arg1;
- (void)set_t_filePresenterStarted:(id /* block */)arg1;

@end
