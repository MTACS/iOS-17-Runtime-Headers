
@interface IDSServerMessagingController : NSObject <IDSXPCServerMessagingClient> {
    IDSXPCDaemonController * _daemonController;
    NSHashTable * _delegateMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _inFlightLock;
    NSMutableDictionary * _inFlightRequests;
    NSString * _topic;
    NSString * _uuid;
}

@property (nonatomic, retain) IDSXPCDaemonController *daemonController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSHashTable *delegateMap;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } inFlightLock;
@property (nonatomic, retain) NSMutableDictionary *inFlightRequests;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *topic;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (void)_failMessages;
- (void)_sendData:(id)arg1 withOptions:(id)arg2 identifier:(id)arg3 completion:(id /* block */)arg4;
- (void)_setupInterruptionHandler;
- (void)_setupXPC;
- (void)addDelegate:(id)arg1;
- (id)daemonController;
- (id)delegateMap;
- (void)handleReceivedIncomingMessageData:(id)arg1 identifier:(id)arg2 context:(id)arg3;
- (struct os_unfair_lock_s { unsigned int x1; })inFlightLock;
- (id)inFlightRequests;
- (id)initWithTopic:(id)arg1;
- (id)initWithTopic:(id)arg1 daemonController:(id)arg2;
- (void)sendCertifiedDeliveryReceipt:(id)arg1;
- (void)sendMessageData:(id)arg1 withOptions:(id)arg2 identifier:(id*)arg3 completion:(id /* block */)arg4;
- (void)setDaemonController:(id)arg1;
- (void)setDelegateMap:(id)arg1;
- (void)setInFlightLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setInFlightRequests:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)topic;
- (id)uuid;

@end
