
@interface _TtC7VFXCoreP33_04FAA53CB72A1AD8A5C9D12D73F465CD17MTLLibraryWatcher : NSObject <NSFilePresenter> {
    void block;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  libraryURL;
    void watchingFolderQueue;
}

@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (nonatomic, readonly) NSURL *presentedItemURL;

- (void).cxx_destruct;
- (id)init;
- (void)presentedItemDidChange;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;

@end
