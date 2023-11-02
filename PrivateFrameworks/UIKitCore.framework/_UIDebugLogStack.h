
@interface _UIDebugLogStack : NSObject {
    NSMutableArray * _stack;
}

@property (nonatomic, readonly) _UIDebugLogNode *rootNode;

- (void).cxx_destruct;
- (id)_topNode;
- (void)addMessage:(id)arg1;
- (id)init;
- (void)performWithPushedNode:(id)arg1 block:(id /* block */)arg2;
- (id)popNode;
- (void)pushNode:(id)arg1;
- (id)rootNode;

@end
