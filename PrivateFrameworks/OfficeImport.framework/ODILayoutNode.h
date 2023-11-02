
@interface ODILayoutNode : NSObject {
    ODDAlgorithm * mAlgorithm;
    NSMutableArray * mChildren;
    ODDPoint * mPoint;
    ODDShape * mShape;
}

- (void).cxx_destruct;
- (id)initWithLayoutNode:(id)arg1 point:(id)arg2;
- (id)initWithLayoutNode:(id)arg1 state:(struct ODILayoutNodeState { id x1; bool x2; }*)arg2;
- (void)processAlgorithm:(id)arg1 state:(struct ODILayoutNodeState { id x1; bool x2; }*)arg2;
- (void)processChoose:(id)arg1 state:(struct ODILayoutNodeState { id x1; bool x2; }*)arg2;
- (void)processForEach:(id)arg1 state:(struct ODILayoutNodeState { id x1; bool x2; }*)arg2;
- (void)processLayoutNode:(id)arg1 state:(struct ODILayoutNodeState { id x1; bool x2; }*)arg2;
- (void)processLayoutObjects:(id)arg1 state:(struct ODILayoutNodeState { id x1; bool x2; }*)arg2;
- (void)processShape:(id)arg1 state:(struct ODILayoutNodeState { id x1; bool x2; }*)arg2;

@end
