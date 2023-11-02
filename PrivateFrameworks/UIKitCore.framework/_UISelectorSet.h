
@interface _UISelectorSet : NSObject <NSCopying> {
    NSHashTable * _hash;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addSelector:(SEL)arg1;
- (bool)containsSelector:(SEL)arg1;
- (bool)containsSet:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)enumerateSelectorsUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithHash:(id)arg1;
- (id)initWithSelectors:(SEL)arg1;
- (void)intersectSet:(id)arg1;
- (bool)intersectsSet:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)removeSelector:(SEL)arg1;
- (void)unionSet:(id)arg1;

@end
