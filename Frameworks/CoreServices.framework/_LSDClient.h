
@interface _LSDClient : NSObject {
    NSXPCConnection * _XPCConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, retain) NSXPCConnection *XPCConnection;

- (void).cxx_destruct;
- (id)XPCConnection;
- (void)didHandleInvocation:(id)arg1 isReply:(bool)arg2;
- (void)handleXPCInvocation:(id)arg1 isReply:(bool)arg2;
- (id)initWithXPCConnection:(id)arg1;
- (id)initWithXPCConnection:(id)arg1 queue:(id)arg2;
- (void)invokeServiceInvocation:(id)arg1 isReply:(bool)arg2;
- (void)willHandleInvocation:(id)arg1 isReply:(bool)arg2;

@end
