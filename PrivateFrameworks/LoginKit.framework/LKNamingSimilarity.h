
@interface LKNamingSimilarity : NSObject <NSSecureCoding> {
    unsigned long long  _similarity;
}

@property (nonatomic) unsigned long long similarity;

+ (id)namingSimilarityWithSimilarity:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLKNamingSimilarity:(id)arg1;
- (void)setSimilarity:(unsigned long long)arg1;
- (unsigned long long)similarity;

@end
