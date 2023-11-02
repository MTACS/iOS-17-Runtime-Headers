
@interface PFPseudoRandomNumberGenerator : NSObject <PFSeededRandomNumberGenerator> {
    unsigned int  _w;
    unsigned int  _z;
}

@property (nonatomic) unsigned long long seed;

- (double)_next;
- (id)init;
- (id)initWithSeed:(unsigned long long)arg1;
- (unsigned long long)nextUnsignedIntegerLessThan:(unsigned long long)arg1;
- (unsigned long long)seed;
- (void)setSeed:(unsigned long long)arg1;

@end
