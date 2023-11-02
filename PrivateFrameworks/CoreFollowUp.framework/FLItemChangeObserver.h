
@interface FLItemChangeObserver : NSObject {
    id /* block */  _itemChangeObserver;
    int  _notifyToken;
}

+ (id)observerWithChangeHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setItemChangeHandler:(id /* block */)arg1;
- (void)timerUpdated;

@end
