
@interface KVPriorInfo : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _ordinality;
    float  _score;
}

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrdinality:(unsigned int)arg1 score:(float)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPriorInfo:(id)arg1;
- (unsigned int)ordinality;
- (float)score;

@end
