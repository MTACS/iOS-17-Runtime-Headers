
@interface PPScoredContactHandle : NSObject <NSCopying, NSSecureCoding> {
    NSString * _contactHandle;
    double  _score;
}

@property (nonatomic, readonly) NSString *contactHandle;
@property (nonatomic, readonly) double score;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)contactHandle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactHandle:(id)arg1 score:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScoredContactHandle:(id)arg1;
- (long long)reverseCompare:(id)arg1;
- (double)score;

@end
