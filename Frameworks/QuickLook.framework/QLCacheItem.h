
@interface QLCacheItem : NSObject {
    NSMutableArray * _handlers;
    QLItem * _item;
}

@property (nonatomic, retain) QLItem *item;

- (void).cxx_destruct;
- (void)_performHandlers;
- (void)addCompletionHandler:(id /* block */)arg1;
- (void)invalidate;
- (id)item;
- (void)setItem:(id)arg1;

@end
