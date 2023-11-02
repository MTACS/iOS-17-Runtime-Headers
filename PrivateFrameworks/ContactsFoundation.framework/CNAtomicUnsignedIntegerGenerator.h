
@interface CNAtomicUnsignedIntegerGenerator : NSObject {
    _Atomic long long  _n;
}

- (id)description;
- (id)init;
- (unsigned long long)nextUnsignedInteger;

@end
