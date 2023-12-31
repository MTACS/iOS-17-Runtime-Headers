
@interface UIGestureGraphEdge : UIGestureGraphElement {
    bool  _directed;
    UIGestureGraphNode * _sourceNode;
    UIGestureGraphNode * _targetNode;
}

@property (getter=isDirected, nonatomic, readonly) bool directed;
@property (getter=isLoop, nonatomic, readonly) bool loop;
@property (nonatomic, readonly) UIGestureGraphNode *sourceNode;
@property (nonatomic, readonly) UIGestureGraphNode *targetNode;

- (void).cxx_destruct;
- (id)commonNode:(id)arg1;
- (id)description;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 directed:(bool)arg4;
- (bool)isDirected;
- (bool)isLoop;
- (id)oppositeNode:(id)arg1;
- (id)sourceNode;
- (id)targetNode;

@end
