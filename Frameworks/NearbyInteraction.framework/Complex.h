
@interface Complex : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _imag;
    NSNumber * _real;
}

@property (retain) NSNumber *imag;
@property (retain) NSNumber *real;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imag;
- (id)initWithCoder:(id)arg1;
- (id)initWithRealPart:(id)arg1 imagPart:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)real;
- (void)setImag:(id)arg1;
- (void)setReal:(id)arg1;

@end
