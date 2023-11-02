
@interface AFCoercion : NSObject {
    id /* block */  _block;
}

+ (id)coercionWithBlock:(id /* block */)arg1;
+ (id)identityCoercion;
+ (id)stringToUUIDCoercion;
+ (id)typeAssertionWithClass:(Class)arg1;

- (void).cxx_destruct;
- (id)coerceObject:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;

@end
