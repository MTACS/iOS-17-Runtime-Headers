
@interface CMLSimilarityScore : NSObject <NSSecureCoding> {
    unsigned long long  _identifier;
    float  _score;
}

@property (nonatomic) unsigned long long identifier;
@property (nonatomic) float score;

+ (id)scoreWithIdentifier:(unsigned long long)arg1 score:(float)arg2;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 score:(float)arg2;
- (float)score;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setScore:(float)arg1;

@end
