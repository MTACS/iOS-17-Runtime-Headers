
@interface MFWeakReferenceHolder : NSObject {
    <NSObject> * _reference;
}

+ (id)weakReferenceWithObject:(id)arg1;

- (id)_initWithObject:(id)arg1;
- (void)dealloc;
- (id)reference;
- (id)retainedReference;

@end
