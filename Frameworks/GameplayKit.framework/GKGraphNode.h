
@interface GKGraphNode : NSObject <NSSecureCoding> {
    void * _cGraphNode;
    NSMutableArray * _connectedNodes;
}

@property (nonatomic, readonly) NSArray *connectedNodes;

+ (id)node;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addConnection:(id)arg1 bidirectional:(bool)arg2;
- (void)addConnectionsToNodes:(id)arg1 bidirectional:(bool)arg2;
- (void*)cGraphNode;
- (id)connectedNodes;
- (float)costToNode:(id)arg1;
- (void)dealloc;
- (void)deleteCGraphNode;
- (void)encodeWithCoder:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (id)findPathFromNode:(id)arg1;
- (id)findPathToNode:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void*)makeCGraphNode;
- (id)mutConnectedNodes;
- (void)removeConnection:(id)arg1;
- (void)removeConnectionsToNodes:(id)arg1 bidirectional:(bool)arg2;

@end
