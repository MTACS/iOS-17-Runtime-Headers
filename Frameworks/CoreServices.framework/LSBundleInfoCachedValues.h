
@interface LSBundleInfoCachedValues : LSPropertyList {
    NSSet * _keys;
    NSDictionary * _values;
}

@property (nonatomic, readonly) NSSet *allKeys;
@property (nonatomic, readonly) NSDictionary *rawValues;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)_expensiveDictionaryRepresentation;
- (id)_initWithKeys:(id)arg1 forDictionary:(id)arg2;
- (id)allKeys;
- (id)arrayForKey:(id)arg1;
- (id)arrayForKey:(id)arg1 withValuesOfClass:(Class)arg2;
- (bool)boolForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1 valuesOfClass:(Class)arg2;
- (id)init;
- (id)numberForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)objectForKey:(id)arg1 ofType:(Class)arg2;
- (id)objectsForKeys:(id)arg1;
- (id)rawValues;
- (id)stringForKey:(id)arg1;

@end
