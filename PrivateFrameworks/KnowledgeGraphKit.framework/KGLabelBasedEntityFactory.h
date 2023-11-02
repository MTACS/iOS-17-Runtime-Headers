
@interface KGLabelBasedEntityFactory : NSObject <KGEntityFactory> {
    NSMutableDictionary * _classByEdgeLabels;
    NSMutableDictionary * _classByNodeLabels;
    Class  _defaultEdgeClass;
    Class  _defaultNodeClass;
}

@property (nonatomic, retain) Class defaultEdgeClass;
@property (nonatomic, retain) Class defaultNodeClass;

- (void).cxx_destruct;
- (id)_generateAllPossibleLabelSetsForLabels:(id)arg1 labelSetsCache:(id)arg2;
- (Class)_selectClassFromPossibleLabels:(id)arg1 dictionary:(id)arg2;
- (Class)classForEdgeLabels:(id)arg1;
- (Class)classForNodeLabels:(id)arg1;
- (Class)defaultEdgeClass;
- (Class)defaultNodeClass;
- (id)edgeWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5;
- (id)init;
- (id)nodeWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 properties:(id)arg3;
- (void)registerEdgeClass:(Class)arg1 forLabels:(id)arg2;
- (void)registerNodeClass:(Class)arg1 forLabels:(id)arg2;
- (void)setDefaultEdgeClass:(Class)arg1;
- (void)setDefaultNodeClass:(Class)arg1;

@end
