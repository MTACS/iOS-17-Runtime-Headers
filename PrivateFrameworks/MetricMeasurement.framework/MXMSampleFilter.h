
@interface MXMSampleFilter : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _attributeFilters;
    NSSet * _tagFilters;
}

@property (nonatomic, retain) NSMutableDictionary *attributeFilters;
@property (nonatomic, readonly) bool finite;
@property (getter=finite, nonatomic, readonly) bool isFinite;
@property (nonatomic, retain) NSSet *tagFilters;

+ (id)filterWithAttributeFilter:(id)arg1;
+ (id)filterWithAttributeFilter:(id)arg1 tagFilter:(id)arg2;
+ (id)filterWithAttributeFilters:(id)arg1;
+ (id)filterWithTagFilter:(id)arg1;
+ (id)filterWithTagFilters:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAttributeFilters:(id)arg1;
- (id)attributeFilterWithName:(id)arg1;
- (id)attributeFilters;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)finite;
- (id)initWithAttributeFilter:(id)arg1;
- (id)initWithAttributeFilter:(id)arg1 tagFilter:(id)arg2;
- (id)initWithAttributeFilters:(id)arg1;
- (id)initWithAttributeFilters:(id)arg1 tagFilters:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithTagFilter:(id)arg1;
- (id)initWithTagFilters:(id)arg1;
- (bool)matchesSample:(id)arg1;
- (bool)matchesSampleSet:(id)arg1;
- (bool)matchesSamplesWithAttribute:(id)arg1;
- (bool)matchesSamplesWithAttributes:(id)arg1;
- (bool)matchesSamplesWithTag:(id)arg1;
- (void)setAttributeFilters:(id)arg1;
- (void)setTagFilters:(id)arg1;
- (id)tagFilters;

@end
