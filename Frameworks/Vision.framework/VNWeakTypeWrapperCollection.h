
@interface VNWeakTypeWrapperCollection : NSObject {
    NSMutableArray * _weakObjectWrappers;
    NSRecursiveLock * _weakObjectWrappersLock;
}

- (void).cxx_destruct;
- (void)_enumerateObjectsDroppingWeakZeroedObjects:(bool)arg1 usingBlock:(id /* block */)arg2;
- (void)addObject:(id)arg1 droppingWeakZeroedObjects:(bool)arg2;
- (id)allObjectsDroppingWeakZeroedObjects:(bool)arg1;
- (id)description;
- (id)findObjectMeetingSearchCriteria:(id /* block */)arg1 droppingWeakZeroedObjects:(bool)arg2;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
