
@interface _PASLowValueCardinalityMutableDictionaryEnumerator : NSEnumerator {
    unsigned long long  _i;
    NSEnumerator * _keyEnumerator;
    NSArray * _objectsAndKeys;
}

- (void).cxx_destruct;
- (id)allObjects;
- (id)init;
- (id)nextObject;

@end
