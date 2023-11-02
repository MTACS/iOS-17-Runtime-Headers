
@interface CSExternalAnalysisTag : NSObject <NSCopying, NSSecureCoding> {
    double  _confidence;
    NSString * _label;
    NSArray * _synonyms;
}

@property double confidence;
@property (copy) NSString *label;
@property (copy) NSArray *synonyms;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCSCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 synonyms:(id)arg2 confidence:(double)arg3;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)setConfidence:(double)arg1;
- (void)setLabel:(id)arg1;
- (void)setSynonyms:(id)arg1;
- (id)synonyms;

@end
