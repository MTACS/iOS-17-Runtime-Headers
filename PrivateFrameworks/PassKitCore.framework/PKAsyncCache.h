
@interface PKAsyncCache : NSObject {
    NSCache * _itemByKey;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _outstandingRetrievals;
    NSMapTable * _weakItemByKey;
}

- (void).cxx_destruct;
- (void)_executeRetrievalBlock:(id /* block */)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithCache:(id)arg1;
- (void)retrieveItemForKey:(id)arg1 synchronous:(bool)arg2 retrievalBlock:(id /* block */)arg3 deliveryBlock:(id /* block */)arg4;

@end
