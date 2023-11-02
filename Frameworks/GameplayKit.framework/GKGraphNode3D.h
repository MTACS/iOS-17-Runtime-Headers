
@interface GKGraphNode3D : GKGraphNode {
    void * _cGraphNode3D;
}

@property (nonatomic) void position;

+ (id)nodeWithPoint;
+ (bool)supportsSecureCoding;

- (void*)cGraphNode3D;
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
