
@interface DDSAttributeFilter : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _filters;
}

@property (nonatomic, retain) NSMutableDictionary *filters;

+ (id)attributeFilter;
+ (id)attributeFilterWithDictionary:(id)arg1;
+ (unsigned long long)hashDictionary:(id)arg1;
+ (unsigned long long)hashObject:(id)arg1;
+ (unsigned long long)hashSet:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_setForKey:(id)arg1;
- (void)addAllowedValue:(id)arg1 forKey:(id)arg2;
- (void)addAllowedValues:(id)arg1 forKey:(id)arg2;
- (void)addEntriesFromFilter:(id)arg1;
- (id)allowedValuesForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)doesContainAttributes:(id)arg1;
- (id)dumpDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)entriesMatchingAttributes:(id)arg1;
- (void)enumerateAllowedValuesAndKeys:(id /* block */)arg1;
- (id)filters;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToQueryFilter:(id)arg1;
- (void)removeAllowedValue:(id)arg1 forKey:(id)arg2;
- (void)removeAllowedValues:(id)arg1 forKey:(id)arg2;
- (void)setFilters:(id)arg1;

@end
