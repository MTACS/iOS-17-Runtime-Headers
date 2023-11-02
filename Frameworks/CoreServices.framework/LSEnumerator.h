
@interface LSEnumerator : NSEnumerator <NSCopying> {
    id /* block */  _errorHandler;
    id /* block */  _filter;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _hasFiredErrorHandler;
}

@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, copy) NSPredicate *predicate;

+ (id)enumeratorForApplicationProxiesWithOptions:(unsigned long long)arg1;
+ (id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2;
+ (id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2 filter:(id /* block */)arg3;
+ (void)initialize;
+ (id)new;

- (void).cxx_destruct;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)errorHandler;
- (id /* block */)filter;
- (id)init;
- (id)nextObject;
- (id)predicate;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setPredicate:(id)arg1;
- (id)swift_firstWhere:(id /* block */)arg1;
- (void)swift_forEach:(id /* block */)arg1;

@end
