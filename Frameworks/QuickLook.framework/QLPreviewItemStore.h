
@interface QLPreviewItemStore : NSObject <QLPreviewControllerDataSource, QLPreviewItemProvider> {
    NSPointerArray * _cache;
    <QLPreviewItemStoreDelegate> * _delegate;
    QLDataSource * _internalItemProvider;
    bool  _isArchive;
    <QLPreviewItemProvider> * _itemProvider;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _possibleRange;
}

@property <QLPreviewItemStoreDelegate> *delegate;
@property (readonly) bool isArchive;
@property (nonatomic) <QLPreviewItemProvider> *itemProvider;
@property (readonly) unsigned long long numberOfItems;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } possibleRange;

- (void).cxx_destruct;
- (void)clearCache;
- (void)clearItems;
- (void)dealloc;
- (id)delegate;
- (bool)hasLoadedItemsMatching:(id /* block */)arg1;
- (long long)indexOfPreviewItem:(id)arg1;
- (id)init;
- (id)initWithItemsOfDirectoryAtURL:(id)arg1;
- (id)initWithPreviewItems:(id)arg1;
- (bool)isArchive;
- (id)itemProvider;
- (id)loadedItemsMatching:(id /* block */)arg1;
- (unsigned long long)numberOfItems;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })possibleRange;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)previewItemAtIndex:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)reloadWithNumberOfPreviewItems:(unsigned long long)arg1;
- (void)resolvedPreviewItemAtIndex:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setItemProvider:(id)arg1;

@end
