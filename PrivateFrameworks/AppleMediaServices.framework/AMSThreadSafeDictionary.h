
@interface AMSThreadSafeDictionary : NSObject {
    AMSThreadSafeObject * _backingDictionary;
}

@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;
@property (nonatomic, retain) AMSThreadSafeObject *backingDictionary;

- (void).cxx_destruct;
- (id)allKeys;
- (id)allValues;
- (id)backingDictionary;
- (id)init;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)readWrite:(id /* block */)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setBackingDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
