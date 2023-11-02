
@interface WBSPersistentPropertyListStore : NSObject {
    NSURL * _backingStoreURL;
    id /* block */  _createEmptyStoreHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _store;
    id /* block */  _validateLoadedStoreHandler;
    WBSCoalescedAsynchronousWriter * _writer;
}

@property (nonatomic, copy) id /* block */ createEmptyStoreHandler;
@property (nonatomic, copy) id /* block */ validateLoadedStoreHandler;

- (void).cxx_destruct;
- (id)_dataRepresentation;
- (id)_existingSavedData;
- (void)_loadDataIfNecessary;
- (id)_objectForKey:(id)arg1 ofClass:(Class)arg2;
- (void)_prepareEmptyStore;
- (id)allKeys;
- (id)arrayForKey:(id)arg1;
- (void)clearStoreSynchronously;
- (id /* block */)createEmptyStoreHandler;
- (id)dataForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)initWithBackingStoreURL:(id)arg1;
- (id)initWithBackingStoreURL:(id)arg1 fileResourceValues:(id)arg2;
- (id)numberForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)saveAndCloseStoreSynchronously;
- (void)saveStoreSynchronously;
- (void)setCreateEmptyStoreHandler:(id /* block */)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setValidateLoadedStoreHandler:(id /* block */)arg1;
- (id)stringForKey:(id)arg1;
- (id /* block */)validateLoadedStoreHandler;

@end
