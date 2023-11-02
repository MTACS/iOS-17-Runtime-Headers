
@interface PRLiveProtobufStream : NSObject <PRProtobufClientProtocol> {
    NSXPCConnection * _conn;
    <PRLiveProtobufStreamDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSUUID * _uniqueId;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRLiveProtobufStreamDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)consumeProtobufBytes:(id)arg1;
- (id)delegate;
- (id)delegateQueue;
- (void)getUniqueClientIdentifier:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (id)server;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)start;
- (void)stop;

@end
