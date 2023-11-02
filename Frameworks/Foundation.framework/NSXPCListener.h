
@interface NSXPCListener : NSObject {
    union { 
        NSObject<OS_xpc_object> *xpc; 
        id remote; 
        /* Warning: Unrecognized filer type: ')' using 'void*' */ void*OS_xpc_remote_connection; 
    }  _connection;
    _Atomic id  _delegate;
    unsigned char  _remote;
    NSString * _serviceName;
    unsigned long long  _state;
    NSObject<OS_dispatch_queue> * _userQueue;
}

@property <NSXPCListenerDelegate> *delegate;
@property (readonly, retain) NSXPCListenerEndpoint *endpoint;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_UUID;
+ (id)anonymousListener;
+ (void)enableTransactions;
+ (id)serviceListener;

- (id)__initWithoutRemoteConnection;
- (void)__receiveRemoteConnection:(id)arg1;
- (id)_initShared;
- (id)_initWithRemoteName:(id)arg1;
- (id)_queue;
- (void)_setQueue:(id)arg1;
- (id)_xpcConnection;
- (void)activate;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)endpoint;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (void)invalidate;
- (void)resume;
- (id)serviceName;
- (void)setDelegate:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)stop;
- (void)suspend;

// Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing

- (void)sf_setQueue:(id)arg1;

@end
