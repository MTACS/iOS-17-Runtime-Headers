
@interface _CNLazyArrayEnumeratorSource : NSObject <_CNLazyArrayOperation> {
    NSEnumerator * _enumerator;
}

- (void).cxx_destruct;
- (id)initWithEnumerator:(id)arg1;
- (id)nextObject;

@end
