
@interface CKGenericCondition : NSObject <NSCopying, NSSecureCoding> {
    void $__lazy_storage_$_sql;
    void negated;
    void type;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSPredicate *predicate;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)and:(id)arg1;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateOn:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchType:(long long)arg1 value:(id)arg2 negated:(bool)arg3;
- (id)initWithValue:(bool)arg1;
- (id)or:(id)arg1;
- (id)predicate;

@end
