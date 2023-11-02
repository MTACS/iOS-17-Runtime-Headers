
@interface REMGrocerySuggestedSection : NSObject <NSCopying, NSSecureCoding> {
    float  _confidenceScore;
    NSString * _sectionCanonicalName;
}

@property (nonatomic, readonly) float confidenceScore;
@property (nonatomic, readonly) NSString *sectionCanonicalName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)confidenceScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSectionCanonicalName:(id)arg1 confidenceScore:(float)arg2;
- (bool)isEqual:(id)arg1;
- (id)sectionCanonicalName;

@end
