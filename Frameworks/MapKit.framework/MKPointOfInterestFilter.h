
@interface MKPointOfInterestFilter : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _excludedCategories;
    NSSet * _includedCategories;
}

@property (getter=_isAllCategories, nonatomic, readonly) bool isAllCategories;
@property (getter=_isInclusive, nonatomic, readonly) bool isInclusive;

+ (id)filterExcludingAllCategories;
+ (id)filterIncludingAllCategories;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_excludesAllCategories;
- (id)_geoPOICategoryFilter;
- (bool)_includesAllCategories;
- (bool)_isAllCategories;
- (bool)_isInclusive;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)excludesCategory:(id)arg1;
- (bool)includesCategory:(id)arg1;
- (id)init;
- (id)initExcludingCategories:(id)arg1;
- (id)initIncludingCategories:(id)arg1;
- (id)initIncludingCategories:(id)arg1 excludingCategories:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPointOfInterestFilter:(id)arg1;

@end
