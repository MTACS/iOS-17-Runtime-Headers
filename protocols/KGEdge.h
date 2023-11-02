
@protocol KGEdge <KGElement>

@required

- (id)initWithIdentifier:(unsigned long long)arg1 labels:(NSSet *)arg2 properties:(NSDictionary *)arg3 sourceNode:(id <KGNode>)arg4 targetNode:(id <KGNode>)arg5;
- (<KGNode> *)oppositeNodeFromNode:(id <KGNode>)arg1;
- (<KGNode> *)sourceNode;
- (<KGNode> *)targetNode;

@end
