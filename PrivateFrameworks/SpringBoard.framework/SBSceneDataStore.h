
@interface SBSceneDataStore : NSObject {
    NSMutableDictionary * _archivedObjectCache;
    NSMutableDictionary * _data;
    id /* block */  _handler;
    NSString * _identifier;
    bool  _invalidated;
}

@property (getter=_data, nonatomic, readonly) NSDictionary *data;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=_isInvalidated, nonatomic, readonly) bool invalidated;

- (void).cxx_destruct;
- (id)_data;
- (id)_initWithIdentifier:(id)arg1 data:(id)arg2 changeHandler:(id /* block */)arg3;
- (void)_invalidate;
- (void)_invokeChangeHandler;
- (bool)_isInvalidated;
- (id)identifier;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)setArchivedObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)unarchivedObjectOfClass:(Class)arg1 forKey:(id)arg2;

@end
