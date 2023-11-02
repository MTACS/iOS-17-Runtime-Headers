
@interface MPARC4RandomSource : NSObject <MPRandom, NSCopying, NSSecureCoding> {
    NSData * _seed;
    struct Arc4State { unsigned int x1; unsigned int x2; char *x3; } * _state;
}

@property (nonatomic, copy) NSData *seed;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeed:(id)arg1;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (id)seed;
- (void)setSeed:(id)arg1;

@end
