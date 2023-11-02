
@interface NSKeyValueIvarMutableSet : NSKeyValueMutableSet {
    struct objc_ivar { } * _ivar;
}

- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (unsigned long long)count;
- (void)intersectSet:(id)arg1;
- (id)member:(id)arg1;
- (void)minusSet:(id)arg1;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)setSet:(id)arg1;
- (void)unionSet:(id)arg1;

@end
