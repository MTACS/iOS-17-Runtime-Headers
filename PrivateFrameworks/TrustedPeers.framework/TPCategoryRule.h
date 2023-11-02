
@interface TPCategoryRule : NSObject <NSSecureCoding> {
    NSString * _category;
    NSString * _prefix;
}

@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *prefix;

+ (id)ruleWithPrefix:(id)arg1 category:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)category;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCategoryRule:(id)arg1;
- (id)prefix;
- (void)setCategory:(id)arg1;
- (void)setPrefix:(id)arg1;

@end
