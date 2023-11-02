
@interface SUScriptKeyValueStore : SUScriptObject {
    NSString * _domain;
    SSKeyValueStore * _keyValueStore;
}

+ (id)_checkOutStoreWithDomain:(id)arg1;
+ (void)_popStoreWithDomain:(id)arg1;
+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (void)dealloc;
- (void)getValueForKey:(id)arg1 usingFunction:(id)arg2;
- (id)initWithDomain:(id)arg1;
- (void)removeAllValues;
- (void)removeValueForKey:(id)arg1;
- (void)setValueForKey:(id)arg1 value:(id)arg2;
- (id)valueForKey:(id)arg1;

@end
