
@interface BLSPeekingEnumerator : NSEnumerator {
    NSEnumerator * _enumerator;
    id  _peekedObject;
}

+ (id)peekingEnumeratorWithEnumerator:(id)arg1;

- (void).cxx_destruct;
- (id)nextObject;
- (id)peekNextObject;

@end
