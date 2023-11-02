
@interface MAKGEntityFactory : NSObject <KGEntityFactory> {
    MAGraphSpecification * _specification;
}

@property (nonatomic, readonly) MAGraphSpecification *specification;

- (void).cxx_destruct;
- (id)edgeWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5;
- (id)initWithSpecification:(id)arg1;
- (id)nodeWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 properties:(id)arg3;
- (id)specification;

@end
