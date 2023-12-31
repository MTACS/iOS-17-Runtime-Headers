
@interface RMDARC4RandomSource : RMDRandomSource {
    NSData * _seed;
    struct Arc4State { unsigned int x1; unsigned int x2; char *x3; } * _state;
}

@property (nonatomic, copy) NSData *seed;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)dropValuesWithCount:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeed:(id)arg1;
- (unsigned long long)nextBits:(int)arg1;
- (bool)nextBool;
- (long long)nextInt;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (float)nextUniform;
- (id)seed;
- (void)setSeed:(id)arg1;

@end
