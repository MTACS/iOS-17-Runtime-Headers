
@interface BSCopyingCacheSet : NSObject {
    NSSet * _immutable;
    NSMutableSet * _mutable;
}

@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (id)immutableSet;
- (void)removeObject:(id)arg1;

@end
