
@interface RBProcessMap : NSObject <NSCopying> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _valueMap;
}

- (void).cxx_destruct;
- (void)addIdentity:(id)arg1;
- (id)allIdentities;
- (id)allValue;
- (bool)containsIdentity:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)dictionary;
- (void)enumerateWithBlock:(id /* block */)arg1;
- (id)init;
- (void)removeAllObjects;
- (void)removeIdentity:(id)arg1;
- (id)removeValueForIdentity:(id)arg1;
- (id)removeValueForIdentity:(id)arg1 withPredicate:(id /* block */)arg2;
- (id)setValue:(id)arg1 forIdentity:(id)arg2;
- (id)valueForIdentity:(id)arg1;

@end
