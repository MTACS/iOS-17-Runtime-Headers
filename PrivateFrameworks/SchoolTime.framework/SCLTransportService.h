
@interface SCLTransportService : NSObject <IDSServiceDelegate, IDSServiceDelegatePrivate> {
    NSObject<OS_dispatch_queue> * _queue;
    IDSService * _service;
    NSObject<OS_dispatch_queue> * _targetQueue;
    NSHashTable * _transportControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) IDSService *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *targetQueue;
@property (nonatomic, readonly) NSHashTable *transportControllers;

- (void).cxx_destruct;
- (void)addTransportController:(id)arg1;
- (id)initWithTargetQueue:(id)arg1 service:(id)arg2;
- (id)queue;
- (void)removeTransportController:(id)arg1;
- (bool)sendProtobuf:(id)arg1 toDevice:(id)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 fromID:(id)arg4 hasBeenDeliveredWithContext:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)start;
- (id)targetQueue;
- (id)transportControllerForDevice:(id)arg1;
- (id)transportControllers;

@end
