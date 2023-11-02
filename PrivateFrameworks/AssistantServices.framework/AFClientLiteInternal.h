
@interface AFClientLiteInternal : NSObject <AFClientLiteClientCommandHandling> {
    id /* block */  _commandHandler;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_handleCommand:(id)arg1 afterCurrentRequest:(bool)arg2 isOneWay:(bool)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (oneway void)handleCommand:(id)arg1 completion:(id /* block */)arg2;
- (id)initAndHandleCommand:(id)arg1 afterCurrentRequest:(bool)arg2 isOneWay:(bool)arg3 commandHandler:(id /* block */)arg4 completion:(id /* block */)arg5;

@end
