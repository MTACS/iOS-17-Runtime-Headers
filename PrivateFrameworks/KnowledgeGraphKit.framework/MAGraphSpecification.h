
@interface MAGraphSpecification : NSObject <NSCopying> {
    Class  _defaultEdgeClass;
    Class  _defaultNodeClass;
    long long  _persistenceOptions;
    MAGraphReference * _rootGraphReference;
}

@property (retain) Class defaultEdgeClass;
@property (retain) Class defaultNodeClass;
@property long long persistenceOptions;
@property (nonatomic, retain) MAGraphReference *rootGraphReference;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)defaultEdgeClass;
- (Class)defaultNodeClass;
- (Class)edgeClassWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)arg1;
- (void)enumerateNodeClassesUsingBlock:(id /* block */)arg1;
- (id)init;
- (Class)nodeClassWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (long long)persistenceOptions;
- (id)rootGraphReference;
- (void)setDefaultEdgeClass:(Class)arg1;
- (void)setDefaultNodeClass:(Class)arg1;
- (void)setPersistenceOptions:(long long)arg1;
- (void)setRootGraphReference:(id)arg1;

@end
