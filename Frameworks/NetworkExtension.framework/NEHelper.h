
@interface NEHelper : NSObject {
    NSDictionary * _additionalProperties;
    int  _classID;
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    id /* block */  _incomingMessageHandler;
    bool  _isSynchronous;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (copy) id /* block */ incomingMessageHandler;
@property (nonatomic) bool isSynchronous;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)incomingMessageHandler;
- (id)initWithDelegateClassID:(int)arg1 queue:(id)arg2;
- (id)initWithDelegateClassID:(int)arg1 queue:(id)arg2 additionalProperties:(id)arg3;
- (bool)isSynchronous;
- (void)sendRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)setIncomingMessageHandler:(id /* block */)arg1;
- (void)setIsSynchronous:(bool)arg1;

@end
