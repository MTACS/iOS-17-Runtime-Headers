
@interface CDMServiceGraphRunner : NSObject {
    NSMutableDictionary * _callbackMap;
    NSMutableDictionary * _handlerMap;
    NSMutableDictionary * _handlerSkipMap;
    NSMutableDictionary * _operationMap;
    NSMutableDictionary * _operationMapWithNodeName;
    NSOperationQueue * _queue;
}

- (void).cxx_destruct;
- (void)cancelAllHandlers;
- (void)cancelHandler:(id)arg1;
- (void)cancelHandlerById:(id)arg1;
- (void)cancelHandlerById:(id)arg1 causeByError:(bool)arg2;
- (void)dealloc;
- (void)dumpServiceGraphNodeQueue;
- (void)finishHandlerById:(id)arg1;
- (id)getOperationState:(id)arg1;
- (id)getServiceGraphNodeQueue;
- (id)init;
- (id)initWithMaxConcurrentCount:(int)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)resume;
- (void)runHandlerAsync:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)skipNode:(id)arg1 forCondition:(id /* block */)arg2 withHandlerId:(id)arg3;
- (void)suspend;
- (void)waitAll;

@end
