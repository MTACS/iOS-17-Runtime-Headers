
@protocol PFSeededRandomNumberGenerator <PFRandomNumberGenerator>

@required

- (id)initWithSeed:(unsigned long long)arg1;
- (unsigned long long)seed;
- (void)setSeed:(unsigned long long)arg1;

@end
