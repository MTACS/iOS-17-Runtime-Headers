
@interface STMSizeCacheEntry : NSObject {
    NSLock * _calculateLock;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id  _item;
    NSString * _itemPath;
    NSNumber * _itemSize;
    NSOperationQueue * _queue;
    id /* block */  _sizingBlock;
    unsigned long long  _status;
}

@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain) id item;
@property (readonly) NSString *itemPath;
@property (retain) NSNumber *itemSize;
@property (retain) NSOperationQueue *queue;
@property (copy) id /* block */ sizingBlock;
@property unsigned long long status;

- (void).cxx_destruct;
- (void)calculateSize;
- (id)dispatchQueue;
- (id)initWithContainer:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 usingFastSizingIfPossible:(bool)arg2;
- (id)item;
- (id)itemPath;
- (id)itemSize;
- (id)queue;
- (void)setDispatchQueue:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setItemSize:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSizingBlock:(id /* block */)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (id /* block */)sizingBlock;
- (unsigned long long)status;

@end
