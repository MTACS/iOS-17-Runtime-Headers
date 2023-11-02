
@interface AFSynchronousClientLite : AFClientLite

- (void)_handleCommand:(id)arg1 afterCurrentRequest:(bool)arg2 isOneWay:(bool)arg3 commandHandler:(id /* block */)arg4 completion:(id /* block */)arg5;

@end
