
@interface _NSProxyWrapperMutableSet : _NSNotifyingWrapperMutableSet {
    _NSFaultingMutableSetMutationMethods * _mutationMethods;
}

- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)dealloc;
- (void)intersectSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)setSet:(id)arg1;
- (void)unionSet:(id)arg1;

@end
