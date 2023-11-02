
@interface _IKArrayEnumerator : NSEnumerator {
    IKArray * _array;
    long long  _currentIndex;
}

- (void).cxx_destruct;
- (id)initWithArray:(id)arg1;
- (id)nextObject;

@end
