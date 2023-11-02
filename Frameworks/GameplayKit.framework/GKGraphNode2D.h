
@interface GKGraphNode2D : GKGraphNode {
    void * _cGraphNode2D;
}

@property (nonatomic) void position;

+ (id)nodeWithPoint;
+ (bool)supportsSecureCoding;

- (void*)cGraphNode2D;
- (float)costToNode:(id)arg1;
- (void)deleteCGraphNode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPoint;
- (void*)makeCGraphNode;
- (void)position;
- (void)setPosition;

@end
