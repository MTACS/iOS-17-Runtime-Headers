
@interface TranslationUI.SharedTranslations : NSObject <NSFilePresenter> {
    void fileAccessQueue;
    void presentedItemChangedAction;
    void presentedItemOperationQueue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  presentedItemURL;
    void translations;
}

@property (nonatomic, retain) NSOperationQueue *presentedItemOperationQueue;
@property (nonatomic, copy) NSURL *presentedItemURL;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)presentedItemDidChange;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)setPresentedItemOperationQueue:(id)arg1;
- (void)setPresentedItemURL:(id)arg1;

@end
