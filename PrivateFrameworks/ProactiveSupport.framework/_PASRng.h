
@interface _PASRng : NSObject {
    struct { 
        unsigned long long s[2]; 
    }  _state;
}

- (id)init;
- (id)initWithSeed:(unsigned long long)arg1;
- (unsigned long long)next;
- (double)nextDouble;
- (float)nextFloat;

@end
