
@interface _CRSearchCollectionPredicate : CRSearchPredicate {
    NSArray * _collection;
    NSString * _key;
}

@property (readonly, copy) NSArray *collection;
@property (readonly, copy) NSString *key;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asNSPredicate;
- (id)collection;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 collection:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)key;

@end
