
@interface Coherence.CRFileSyncPresenter : NSObject <NSFilePresenter> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  fileURL;
    void manager;
    void queue;
}

@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (nonatomic, readonly) NSURL *presentedItemURL;

- (void).cxx_destruct;
- (id)init;
- (void)presentedItemDidChange;
- (void)presentedItemDidGainVersion:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;

@end
