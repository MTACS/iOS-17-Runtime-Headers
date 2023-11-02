
@interface AXUIMessageContext : NSObject {
    id /* block */  _completion;
    bool  _completionRequiresWritingBlock;
    void * _context;
    AXAccessQueue * _targetAccessQueue;
    NSObject<OS_xpc_object> * _xpcMessage;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) bool completionRequiresWritingBlock;
@property (nonatomic) void*context;
@property (nonatomic, retain) AXAccessQueue *targetAccessQueue;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcMessage;

- (void).cxx_destruct;
- (id /* block */)completion;
- (bool)completionRequiresWritingBlock;
- (void*)context;
- (void)setCompletion:(id /* block */)arg1;
- (void)setCompletionRequiresWritingBlock:(bool)arg1;
- (void)setContext:(void*)arg1;
- (void)setTargetAccessQueue:(id)arg1;
- (void)setXpcMessage:(id)arg1;
- (id)targetAccessQueue;
- (id)xpcMessage;

@end
