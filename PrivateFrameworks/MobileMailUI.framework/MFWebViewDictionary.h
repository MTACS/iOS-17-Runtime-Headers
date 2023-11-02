
@interface MFWebViewDictionary : NSMutableDictionary {
    NSMutableSet * _changedKeys;
    NSString * _javascriptName;
    bool  _requiresResynchronization;
    NSMutableDictionary * _storage;
    <MFMailWebProcessProxy> * _webProcessProxy;
}

@property (nonatomic, readonly) NSString *javascriptName;

- (void).cxx_destruct;
- (void)_setRequiresSynchronization;
- (void)_updateRemoteInstance;
- (id)allKeys;
- (id)allKeysForObject:(id)arg1;
- (id)allValues;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (bool)isEqualToDictionary:(id)arg1;
- (id)javascriptName;
- (id)keyEnumerator;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (void)registerWithWebView:(id)arg1 javascriptName:(id)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (void)synchronize;

@end
