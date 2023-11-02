
@interface _CROrConjunctionPredicate : CRSearchPredicate {
    NSArray * _subpredicates;
}

@property (readonly, copy) NSArray *subpredicates;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asNSPredicate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubpredicates:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)subpredicates;

@end
