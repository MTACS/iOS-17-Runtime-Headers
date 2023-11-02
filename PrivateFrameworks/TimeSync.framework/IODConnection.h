
@interface IODConnection : NSObject {
    int (* _asyncCallback;
    IOKNotificationPort * _asyncCallbackPort;
    NSObject<OS_dispatch_queue> * _asyncCallbackQueue;
    unsigned int  _clientID;
    unsigned long long  _refcon;
}

+ (void)daemonClientRefresh;
+ (void)dispatchNotificationForClientID:(unsigned int)arg1 ioResult:(int)arg2 args:(const unsigned long long*)arg3 numArgs:(unsigned int)arg4;

- (void).cxx_destruct;
- (bool)callMethodWithSelector:(unsigned int)arg1 scalarInputs:(const unsigned long long*)arg2 scalarInputCount:(unsigned int)arg3 scalarOutputs:(unsigned long long*)arg4 scalarOutputCount:(unsigned int*)arg5 error:(id*)arg6;
- (bool)callMethodWithSelector:(unsigned int)arg1 scalarInputs:(const unsigned long long*)arg2 scalarInputCount:(unsigned int)arg3 structInput:(const void*)arg4 structInputSize:(unsigned long long)arg5 scalarOutputs:(unsigned long long*)arg6 scalarOutputCount:(unsigned int*)arg7 error:(id*)arg8;
- (bool)callMethodWithSelector:(unsigned int)arg1 structInput:(const void*)arg2 structInputSize:(unsigned long long)arg3 error:(id*)arg4;
- (void)dealloc;
- (bool)deregisterAsyncNotificationsWithSelector:(unsigned int)arg1;
- (id)init;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 andType:(unsigned int)arg2;
- (bool)registerAsyncNotificationsWithSelector:(unsigned int)arg1 callBack:(int (*)arg2 refcon:(unsigned long long)arg3 callbackQueue:(id)arg4;

@end
