
@interface _UIWebFormDelegateEditedFormsMap : NSObject {
    NSMutableArray * _lifetimeHelper;
    NSMutableDictionary * _map;
}

- (id)_keyForWebFrame:(id)arg1;
- (id)allValues;
- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
