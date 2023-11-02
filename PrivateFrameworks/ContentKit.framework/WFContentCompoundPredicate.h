
@interface WFContentCompoundPredicate : WFContentPredicate <WFContentPropertyContainer> {
    unsigned long long  _compoundPredicateType;
    NSArray * _subpredicates;
}

@property (readonly) unsigned long long compoundPredicateType;
@property (nonatomic, readonly) NSSet *containedProperties;
@property (readonly, copy) NSArray *subpredicates;

+ (id)andPredicateWithSubpredicates:(id)arg1;
+ (id)notPredicateWithSubpredicate:(id)arg1;
+ (id)orPredicateWithSubpredicates:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)compoundPredicateType;
- (id)containedProperties;
- (id)description;
- (void)evaluateWithObject:(id)arg1 propertySubstitutor:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2;
- (id)subpredicates;

@end
