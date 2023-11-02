
@interface _TtCC7VFXCore10URLWatcherP33_44229AA1B962F34745B596FB57A0D0CC9Presenter : NSObject <NSFilePresenter> {
    void entity;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastModificationDate;
    void manager;
    void shouldReplicate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
}

@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (nonatomic, readonly) NSURL *presentedItemURL;

- (void).cxx_destruct;
- (id)init;
- (void)presentedItemDidChange;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;

@end
