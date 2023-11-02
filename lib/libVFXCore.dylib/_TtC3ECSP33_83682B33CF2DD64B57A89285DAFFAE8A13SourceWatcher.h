
@interface _TtC3ECSP33_83682B33CF2DD64B57A89285DAFFAE8A13SourceWatcher : NSObject <NSFilePresenter> {
    void handler;
    void path;
    void presentedItemOperationQueue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  presentedItemURL;
}

@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (nonatomic, copy) NSURL *presentedItemURL;

- (void).cxx_destruct;
- (id)init;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)presentedSubitemDidAppearAtURL:(id)arg1;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (void)setPresentedItemURL:(id)arg1;

@end
