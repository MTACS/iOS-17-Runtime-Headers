
@interface SBAlertItemsObjectQueue : NSObject <BSDescriptionProviding, NSFastEnumeration> {
    NSMutableOrderedSet * _objects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableOrderedSet *objects;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appendObject:(id)arg1;
- (bool)containsObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)dequeueAllObjects;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)hasObject;
- (bool)hasObjectOfClass:(Class)arg1;
- (id)init;
- (id)objects;
- (id)objectsOfClass:(Class)arg1;
- (void)prependObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)setObjects:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
