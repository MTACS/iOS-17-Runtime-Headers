
@interface HDIDSService : NSObject <IDSServiceDelegate> {
    <HDIDSServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    IDSService * _service;
    NSString * _serviceIdentifier;
    NSString * _shortServiceIdentifier;
    bool  _unitTest_sendOnEmptyDestinationSet;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDIDSServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IDSService *service;
@property (readonly) Class superclass;
@property (nonatomic) bool unitTest_sendOnEmptyDestinationSet;

- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (id)initWithService:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (bool)sendMessage:(id)arg1 destination:(id)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setDelegate:(id)arg1;
- (void)setUnitTest_sendOnEmptyDestinationSet:(bool)arg1;
- (bool)unitTest_sendOnEmptyDestinationSet;

@end
