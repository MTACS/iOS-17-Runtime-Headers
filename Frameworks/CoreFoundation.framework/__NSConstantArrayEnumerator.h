
@interface __NSConstantArrayEnumerator : NSEnumerator {
    unsigned long long  _index;
    NSConstantArray * _underlyingArray;
}

- (id)allObjects;
- (id)initWithConstantArray:(id)arg1;
- (id)nextObject;

@end
