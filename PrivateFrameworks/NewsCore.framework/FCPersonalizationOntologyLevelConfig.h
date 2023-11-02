
@interface FCPersonalizationOntologyLevelConfig : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _tagWeightMapping;
}

@property (nonatomic, retain) NSDictionary *tagWeightMapping;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)initWithConfig:(id)arg1 defaultConfig:(id)arg2;
- (id)initWithTagWeightMapping:(id)arg1;
- (void)setTagWeightMapping:(id)arg1;
- (id)tagWeightMapping;

@end
