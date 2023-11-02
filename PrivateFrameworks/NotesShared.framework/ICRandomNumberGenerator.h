
@interface ICRandomNumberGenerator : NSObject {
    unsigned int  _randomSeed;
}

- (id)initWithSeed:(unsigned int)arg1;
- (double)randomFloat;
- (unsigned long long)randomIndexMin:(unsigned long long)arg1 max:(unsigned long long)arg2;
- (id)randomObject:(id)arg1;

@end
