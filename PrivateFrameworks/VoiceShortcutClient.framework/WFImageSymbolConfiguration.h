
@interface WFImageSymbolConfiguration : NSObject <NSSecureCoding> {
    NSArray * _hierarchicalColors;
    id  _platformSymbolConfiguration;
    double  _pointSize;
    unsigned long long  _representationType;
    unsigned long long  _weight;
}

@property (nonatomic, readonly, copy) NSArray *hierarchicalColors;
@property (nonatomic, readonly) id platformSymbolConfiguration;
@property (nonatomic, readonly) double pointSize;
@property (nonatomic, readonly) unsigned long long representationType;
@property (nonatomic) unsigned long long weight;

+ (id)configurationWithNSImageSymbolConfiguration:(id)arg1;
+ (id)configurationWithPointSize:(double)arg1;
+ (id)configurationWithPointSize:(double)arg1 hierarchicalColors:(id)arg2;
+ (id)configurationWithUIImageSymbolConfiguration:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)hierarchicalColors;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlatformSymbolConfiguration:(id)arg1;
- (id)initWithPointSize:(double)arg1 hierarchicalColors:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)platformHierarchicalColors;
- (id)platformSymbolConfiguration;
- (long long)platformWeight;
- (double)pointSize;
- (unsigned long long)representationType;
- (void)setWeight:(unsigned long long)arg1;
- (id)uiKitConfiguration;
- (unsigned long long)weight;

@end
