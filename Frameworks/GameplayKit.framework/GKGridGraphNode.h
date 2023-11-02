
@interface GKGridGraphNode : GKGraphNode {
    void * _cGridGraphNode;
}

@property (nonatomic, readonly) void gridPosition;

+ (id)nodeWithGridPosition;
+ (bool)supportsSecureCoding;

- (void*)cGridGraphNode;
- (float)costToNode:(id)arg1;
- (void)deleteCGraphNode;
- (void)encodeWithCoder:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (void)gridPosition;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGridPosition;
- (void*)makeCGraphNode;

@end
