
@interface PGGraphSpecification : MAGraphSpecification

- (id)edgeClassByDomain;
- (id)edgeClassByDomainAndLabel;
- (Class)edgeClassWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)arg1;
- (void)enumerateNodeClassesUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)nodeClassByDomain;
- (id)nodeClassByDomainAndLabel;
- (Class)nodeClassWithLabel:(id)arg1 domain:(unsigned short)arg2;

@end
