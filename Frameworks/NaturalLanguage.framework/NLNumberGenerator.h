
@interface NLNumberGenerator : NSObject {
    unsigned long long  state;
}

- (id)init;
- (unsigned long long)numberInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)reset;
- (void)resetWithSeed:(unsigned long long)arg1;

@end
