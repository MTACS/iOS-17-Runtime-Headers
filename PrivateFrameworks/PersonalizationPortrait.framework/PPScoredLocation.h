
@interface PPScoredLocation : NSObject <NSCopying, NSSecureCoding> {
    PPLocation * _location;
    double  _score;
    double  _sentimentScore;
}

@property (nonatomic, readonly) PPLocation *location;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) double sentimentScore;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 score:(double)arg2 sentimentScore:(double)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScoredLocation:(id)arg1;
- (id)location;
- (double)score;
- (double)sentimentScore;

@end
