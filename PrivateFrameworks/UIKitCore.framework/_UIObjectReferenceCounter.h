
@interface _UIObjectReferenceCounter : NSObject {
    NSCountedSet * _objectReferences;
}

- (void).cxx_destruct;
- (id)allObjects;
- (void)decrementReferenceForObject:(id)arg1 invalidationHandler:(id /* block */)arg2;
- (void)incrementReferenceForObject:(id)arg1;

@end
