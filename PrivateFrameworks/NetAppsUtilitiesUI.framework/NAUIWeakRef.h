
@interface NAUIWeakRef : NSObject {
    bool  _useWeakStorage;
    id  _weakPointer;
    id  _weakStorage;
}

+ (id)weakRefWithObject:(id)arg1;

- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)object;

@end
