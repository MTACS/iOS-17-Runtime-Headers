
@protocol GVRenderer <NSObject>

@required

- (void)drawEdge:(GVEdge *)arg1 withPath:(NSArray *)arg2;
- (void)drawNode:(GVNode *)arg1;
- (bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;

@optional

- (int)direction;
- (bool)drawEdgesFirst;
- (struct CGSize { double x1; double x2; })separation;

@end
