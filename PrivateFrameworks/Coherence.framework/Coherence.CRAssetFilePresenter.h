
@interface Coherence.CRAssetFilePresenter : NSObject <NSFilePresenter> {
    void assetManager;
    void presentedItemOperationQueue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  presentedItemURL;
}

@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (nonatomic, readonly) NSURL *presentedItemURL;

- (void).cxx_destruct;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg1;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)presentedSubitemDidAppearAtURL:(id)arg1;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;

@end
