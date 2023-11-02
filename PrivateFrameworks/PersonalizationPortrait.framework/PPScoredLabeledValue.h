
@interface PPScoredLabeledValue : NSObject <NSCopying, NSSecureCoding> {
    unsigned char  _flags;
    PPLabeledValue * _labeledValue;
    double  _score;
}

@property (nonatomic, readonly) unsigned char flags;
@property (nonatomic, readonly) PPLabeledValue *labeledValue;
@property (nonatomic, readonly) double score;

+ (id)scoredLabeledValueWithLabeledValue:(id)arg1 score:(double)arg2 flags:(unsigned char)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)flags;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabeledValue:(id)arg1 score:(double)arg2 flags:(unsigned char)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScoredLabeledValue:(id)arg1;
- (id)labeledValue;
- (long long)reverseCompare:(id)arg1;
- (double)score;

@end
