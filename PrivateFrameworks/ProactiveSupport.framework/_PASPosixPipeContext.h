
@interface _PASPosixPipeContext : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_io> * _readChannel;
    bool  _stop;
    NSFileHandle * _writeHandle;
}

- (void).cxx_destruct;
- (int)setupWithSubprocessFd:(int)arg1 fileActions:(void**)arg2 queue:(id)arg3 group:(id)arg4 readErrno:(int*)arg5;
- (void)startReadWithHandler:(id /* block */)arg1;

@end
