
@interface _CRMatchTextPredicate : CRSearchPredicate {
    unsigned long long  _comparison;
    NSString * _key;
    NSString * _text;
}

@property (readonly) unsigned long long comparison;
@property (readonly, copy) NSString *key;
@property (readonly, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asNSPredicate;
- (unsigned long long)comparison;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 text:(id)arg2 comparison:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)text;

@end
