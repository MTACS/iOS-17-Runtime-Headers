
@interface MSVARC4RandomSource : NSObject <MSVRandomSource, NSCopying, NSSecureCoding> {
    NSData * _seed;
    struct MSVArc4State { unsigned int x1; unsigned int x2; char *x3; } * _state;
}

@property (nonatomic, copy) NSData *seed;

+ (id)sharedSource;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bytesWithLength:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeed:(id)arg1;
- (id)mutableBytesWithLength:(long long)arg1;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (id)seed;
- (void)setSeed:(id)arg1;

@end
