
@protocol KGEntityFactory

@required

- (<KGEdge> *)edgeWithIdentifier:(unsigned long long)arg1 labels:(NSSet *)arg2 properties:(NSDictionary *)arg3 sourceNode:(id <KGNode>)arg4 targetNode:(id <KGNode>)arg5;
- (<KGNode> *)nodeWithIdentifier:(unsigned long long)arg1 labels:(NSSet *)arg2 properties:(NSDictionary *)arg3;

@end
