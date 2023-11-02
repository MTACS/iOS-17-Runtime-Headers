
@interface CDMServiceGraphNode : NSBlockOperation {
    id /* block */  _cancellationBlock;
    NSString * _handlerId;
    NSString * _nodeName;
    NSHashTable * _successors;
}

+ (id)initWithName:(id)arg1 forHandler:(id)arg2 usingFunction:(id /* block */)arg3 withError:(id /* block */)arg4 cancellationBlock:(id /* block */)arg5 dataDispatcherContext:(id)arg6;
+ (id)initWithName:(id)arg1 forHandler:(id)arg2 usingFunction:(id /* block */)arg3 withError:(id /* block */)arg4 cancellationBlock:(id /* block */)arg5 requestId:(id)arg6 dataDispatcherContext:(id)arg7 serviceMetricsArray:(id)arg8;
+ (id)initWithName:(id)arg1 forHandler:(id)arg2 withError:(id /* block */)arg3 usingFunction:(id /* block */)arg4 dataDispatcherContext:(id)arg5;
+ (id)initWithName:(id)arg1 forHandler:(id)arg2 withError:(id /* block */)arg3 usingFunction:(id /* block */)arg4 requestId:(id)arg5 dataDispatcherContext:(id)arg6 serviceMetricsArray:(id)arg7;

- (void).cxx_destruct;
- (void)addDependency:(id)arg1;
- (void)addSuccessor:(id)arg1;
- (void)cancel;
- (id)getHandlerId;
- (id)getNodeName;
- (id)getSuccessors;
- (void)removeDependency:(id)arg1;
- (void)removeSuccessor:(id)arg1;

@end
