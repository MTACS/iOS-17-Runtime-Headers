
@interface MAPath : NSObject <NSCopying> {
    NSMutableArray * _edges;
    NSMutableSet * _nodes;
}

+ (id)path;
+ (id)pathWithEdges:(id)arg1;

- (void).cxx_destruct;
- (void)addFirstEdge:(id)arg1;
- (void)addLastEdge:(id)arg1;
- (bool)containsEdge:(id)arg1;
- (bool)containsNode:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)edgeAtIndex:(unsigned long long)arg1;
- (unsigned long long)edgesCount;
- (id)edgesForLabel:(id)arg1;
- (double)edgesWeight;
- (void)enumerateWithBlock:(id /* block */)arg1;
- (id)graphRepresentation;
- (id)init;
- (bool)isEmpty;
- (bool)isEqualToPath:(id)arg1;
- (id)nodeAtIndex:(unsigned long long)arg1;
- (unsigned long long)nodesCount;
- (id)nodesForLabel:(id)arg1;
- (void)removeAllEdges;
- (void)removeFirstEdge;
- (void)removeLastEdge;
- (void)setEdges:(id)arg1;
- (id)sourceNode;
- (id)targetNode;

@end
